#include <stdio.h>
#include <string.h>
#define SIZE 5

int linear_search(int key, int arr[4][SIZE], int len);
int binary_search(int key, int arr[4][SIZE], int len);
int sort_score(int arr[4][SIZE], char names[SIZE][10], int len);

int main(void) {
    int scores[4][SIZE] = { 0 };
    char names[SIZE][10];
    int search_key, result;

    for (size_t i = 0; i < SIZE; ++i) {
        printf("\n請輸入學生%d的學號: ", i + 1);
        scanf_s("%d", &scores[0][i]);
        printf("\n請輸入學生%d的計概成績: ", i + 1);
        scanf_s("%d", &scores[1][i]);
        printf("\n請輸入學生%d的數學成績: ", i + 1);
        scanf_s("%d", &scores[2][i]);
        printf("\n請輸入學生%d的姓名: ", i + 1);
        scanf_s("%s", names[i], 10);
    }

    printf("\n請輸入要搜尋的學生學號 (使用線性搜尋): ");
    scanf_s("%d", &search_key);
    result = linear_search(search_key, scores, SIZE);

    if (result != -1) {
        printf("\n找到的學生資料如下:\n");
        printf("%-10s %-10d %-8d %-8d %-8d\n",
            names[result], scores[0][result], scores[1][result], scores[2][result], scores[3][result]);
    }
    else {
        printf("\n未找到符合的學生。\n");
    }

    printf("\n排序前:\n");
    printf("%-10s %-10s %-8s %-8s %-8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%-10s %-10d %-8d %-8d %-8d\n", names[i], scores[0][i], scores[1][i], scores[2][i], scores[3][i]);
    }

    int median = sort_score(scores, names, SIZE);

    printf("\n排序後:\n");
    printf("%-10s %-10s %-8s %-8s %-8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%-10s %-10d %-8d %-8d %-8d\n", names[i], scores[0][i], scores[1][i], scores[2][i], scores[3][i]);
    }

    printf("\n請輸入要搜尋的學生學號 (使用二元搜尋): ");
    scanf_s("%d", &search_key);
    result = binary_search(search_key, scores, SIZE);

    if (result != -1) {
        printf("\n找到的學生資料如下:\n");
        printf("%-10s %-10d %-8d %-8d %-8d\n",
            names[result], scores[0][result], scores[1][result], scores[2][result], scores[3][result]);
    }
    else {
        printf("\n未找到符合的學生。\n");
    }

    printf("\n平均成績的中位數為: %d\n", median);

    return 0;
}

int binary_search(int key, int arr[4][SIZE], int len) {
    int low = 0;
    int high = len - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[0][mid] == key) {
            return mid;
        }
        else if (arr[0][mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int linear_search(int key, int arr[4][SIZE], int len) {
    for (int i = 0; i < len; ++i) {
        if (key == arr[0][i]) {
            return i;
        }
    }
    return -1;
}

int sort_score(int arr[4][SIZE], char names[SIZE][10], int len) {
    int temp;
    char temp_name[10];

    for (int i = 0; i < len; i++) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
    }

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[0][j] > arr[0][j + 1]) { 
                for (int k = 0; k < 4; ++k) {
                    temp = arr[k][j];
                    arr[k][j] = arr[k][j + 1];
                    arr[k][j + 1] = temp;
                }

                strcpy_s(temp_name, sizeof(temp_name), names[j]);
                strcpy_s(names[j], sizeof(names[j]), names[j + 1]);
                strcpy_s(names[j + 1], sizeof(names[j + 1]), temp_name);
            }
        }
    }

    return arr[3][len / 2];
}
