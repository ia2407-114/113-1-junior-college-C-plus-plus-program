// 圖6.15: fig06_15.c
// 將陣列的值排序為遞增順序。
/*題目1，請修改上列排序程式按照成績由大到小排序，另外建立一個副程式負責交換兩個值的內容，
變數傳過去的方式請使用"傳位址呼叫"，完成後，由排序副程式呼叫使用，完成每次的交換動作。*/
#include <stdio.h>
#define SIZE 5

// 函式原型
int sort_score(int a[2][SIZE], int len); // 排序函數
void swap(int* x, int* y);               // 交換函數（傳位址呼叫）

// 主函數開始程式執行
int main(void)
{
    int a[2][SIZE] = { 0 }; // 存放學號和分數的二維陣列
    int mid;

    puts("Data items in original order");

    // 輸入學號與成績
    for (size_t i = 0; i < SIZE; ++i) {
        printf("Input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("Input score: ");
        scanf_s("%d", &a[1][i]);
    }

    // 輸出原始順序
    printf("\n學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    // 呼叫排序函數並取得中位數
    mid = sort_score(a, SIZE);

    puts("\n\nData items in descending order");

    // 輸出排序後的陣列
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    // 輸出中位數
    printf("\n\n中位數: %d\n", mid);

    return 0;
}

// 排序函數（成績由大到小排序）
int sort_score(int a[2][SIZE], int len)
{
    for (int pass = 1; pass < len; ++pass) { // 泡沫排序法
        for (int i = 0; i < len - 1; ++i) {
            if (a[1][i] < a[1][i + 1]) { // 如果前分數小於後分數，交換
                swap(&a[1][i], &a[1][i + 1]); // 交換分數
                swap(&a[0][i], &a[0][i + 1]); // 交換學號
            }
        }
    }
    return a[1][len / 2]; // 返回中位數（成績）
}

// 交換函數
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


