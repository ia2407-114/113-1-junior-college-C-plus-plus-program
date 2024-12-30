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
        printf("\n�п�J�ǥ�%d���Ǹ�: ", i + 1);
        scanf_s("%d", &scores[0][i]);
        printf("\n�п�J�ǥ�%d���p�����Z: ", i + 1);
        scanf_s("%d", &scores[1][i]);
        printf("\n�п�J�ǥ�%d���ƾǦ��Z: ", i + 1);
        scanf_s("%d", &scores[2][i]);
        printf("\n�п�J�ǥ�%d���m�W: ", i + 1);
        scanf_s("%s", names[i], 10);
    }

    printf("\n�п�J�n�j�M���ǥ;Ǹ� (�ϥνu�ʷj�M): ");
    scanf_s("%d", &search_key);
    result = linear_search(search_key, scores, SIZE);

    if (result != -1) {
        printf("\n��쪺�ǥ͸�Ʀp�U:\n");
        printf("%-10s %-10d %-8d %-8d %-8d\n",
            names[result], scores[0][result], scores[1][result], scores[2][result], scores[3][result]);
    }
    else {
        printf("\n�����ŦX���ǥ͡C\n");
    }

    printf("\n�Ƨǫe:\n");
    printf("%-10s %-10s %-8s %-8s %-8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�", "����");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%-10s %-10d %-8d %-8d %-8d\n", names[i], scores[0][i], scores[1][i], scores[2][i], scores[3][i]);
    }

    int median = sort_score(scores, names, SIZE);

    printf("\n�Ƨǫ�:\n");
    printf("%-10s %-10s %-8s %-8s %-8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�", "����");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%-10s %-10d %-8d %-8d %-8d\n", names[i], scores[0][i], scores[1][i], scores[2][i], scores[3][i]);
    }

    printf("\n�п�J�n�j�M���ǥ;Ǹ� (�ϥΤG���j�M): ");
    scanf_s("%d", &search_key);
    result = binary_search(search_key, scores, SIZE);

    if (result != -1) {
        printf("\n��쪺�ǥ͸�Ʀp�U:\n");
        printf("%-10s %-10d %-8d %-8d %-8d\n",
            names[result], scores[0][result], scores[1][result], scores[2][result], scores[3][result]);
    }
    else {
        printf("\n�����ŦX���ǥ͡C\n");
    }

    printf("\n�������Z������Ƭ�: %d\n", median);

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
