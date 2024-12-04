#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

int sort_score(int arr[4][5], char names[5][10], int len);
void search_student(int arr[4][5], char names[5][10], int len, int id);

int main(void) {
    int n[4][5] = { 0 }; 
    char names[5][10]; 

    for (size_t i = 0; i < ARRAY_SIZE(names); ++i) {
        printf("\n請輸入學生%d的學號: ", i + 1);
        if (scanf_s("%d", &n[0][i]) != 1) {
            printf("輸入錯誤，請輸入有效的學號。\n");
            return -1;
        }
        printf("請輸入學生%d的計概成績: ", i + 1);
        if (scanf_s("%d", &n[1][i]) != 1) {
            printf("輸入錯誤，請輸入有效的成績。\n");
            return -1;
        }
        printf("請輸入學生%d的數學成績: ", i + 1);
        if (scanf_s("%d", &n[2][i]) != 1) {
            printf("輸入錯誤，請輸入有效的成績。\n");
            return -1;
        }
        printf("請輸入學生%d的姓名: ", i + 1);
        if (scanf_s("%9s", names[i], (unsigned)ARRAY_SIZE(names[i])) != 1) {
            printf("輸入錯誤，請輸入有效的姓名。\n");
            return -1;
        }
    }

    int median = sort_score(n, names, ARRAY_SIZE(names));
    printf("\n平均成績的中位數為: %d\n", median);

    printf("\n排序後:\n");
    printf("%-10s%-8s%-8s%-8s%-8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (size_t i = 0; i < ARRAY_SIZE(names); ++i) {
        printf("%-10s%-8d%-8d%-8d%-8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    int id;
    printf("\n請輸入欲搜尋的學號: ");
    if (scanf_s("%d", &id) != 1) {
        printf("輸入錯誤，請輸入有效的學號。\n");
        return -1;
    }
    search_student(n, names, ARRAY_SIZE(names), id);

    return 0;
}

int sort_score(int arr[4][5], char names[5][10], int len) {
    for (int i = 0; i < len; i++) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2; // 
    }

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[3][j] < arr[3][j + 1]) { //
                for (int k = 0; k < 4; k++) {
                    int temp = arr[k][j];
                    arr[k][j] = arr[k][j + 1];
                    arr[k][j + 1] = temp;
                }
                char temp[10];
                strcpy_s(temp, sizeof(temp), names[j]);
                strcpy_s(names[j], sizeof(names[j]), names[j + 1]);
                strcpy_s(names[j + 1], sizeof(names[j + 1]), temp);
            }
        }
    }
    return arr[3][len / 2]; //
}

void search_student(int arr[4][5], char names[5][10], int len, int id) {
    for (int i = 0; i < len; i++) {
        if (arr[0][i] == id) {
            printf("\n找到學生資料:\n");
            printf("%-10s%-8s%-8s%-8s%-8s\n", "姓名", "學號", "計概", "數學", "平均");
            printf("%-10s%-8d%-8d%-8d%-8d\n", names[i], arr[0][i], arr[1][i], arr[2][i], arr[3][i]);
            return;
        }
    }
    printf("\n未找到學號為 %d 的學生資料。\n", id);
}
