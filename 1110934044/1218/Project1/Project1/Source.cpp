// Sorting an array's values into ascending order with names.
#include <stdio.h>
#include <string.h>
#define SIZE 5
#define NAME_LEN 20

void sort_score(int ids[], int scores[], char* names[], int len);
void swap_int(int* a, int* b);
void swap_string(char** str1, char** str2);

int main(void) {
    int ids[SIZE] = { 0 };        // 學號陣列
    int scores[SIZE] = { 0 };     // 成績陣列
    char names[SIZE][NAME_LEN]; // 存放學生姓名的二維字元陣列
    char* name_ptrs[SIZE];      // 指標陣列，指向姓名

    // 初始化指標陣列指向各學生姓名
    for (int i = 0; i < SIZE; ++i) {
        name_ptrs[i] = names[i];
    }

    // 輸入學號、姓名與成績
    for (int i = 0; i < SIZE; ++i) {
        printf("Input ID for student %d: ", i + 1);
        scanf_s("%d", &ids[i]);
        printf("Input name for student %d: ", i + 1);
        scanf_s("%s", names[i],19);
        printf("Input score for student %d: ", i + 1);
        scanf_s("%d", &scores[i]);
    }

    // 輸出原始資料
    puts("\nData items in original order:");
    printf("學號   姓名              成績\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("%-6d %-15s %4d\n", ids[i], name_ptrs[i], scores[i]);
    }

    // 排序學生成績（由小到大）
    sort_score(ids, scores, name_ptrs, SIZE);

    // 輸出排序後的資料
    puts("\nData items in ascending order:");
    printf("學號   姓名              成績\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("%-6d %-15s %4d\n", ids[i], name_ptrs[i], scores[i]);
    }

    // 顯示中位數
    printf("\n中位數: %d\n", scores[SIZE / 2]);

    return 0;
}

void sort_score(int ids[], int scores[], char* names[], int len) {
    for (int pass = 0; pass < len - 1; ++pass) {
        for (int i = 0; i < len - pass - 1; ++i) {
            if (scores[i] > scores[i + 1]) {
                // 交換成績
                swap_int(&scores[i], &scores[i + 1]);
                // 交換學號
                swap_int(&ids[i], &ids[i + 1]);
                // 交換姓名
                swap_string(&names[i], &names[i + 1]);
            }
        }
    }
}

void swap_int(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_string(char** str1, char** str2) {
    char* temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
