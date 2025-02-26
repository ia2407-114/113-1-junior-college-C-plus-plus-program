// 1211_第1題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
/*題目1，請修改上列排序程式按照成績由大到小排序，另外建立一個副程式負責交換兩個值的內容，變數傳過去的方式請使用"傳位址呼叫"，
完成後，由排序副程式呼叫使用，完成每次的交換動作。*/

#include <stdio.h>
#define SIZE 5 

// 函式原型
int sort_score(int a[2][SIZE], int len);
void swap(int* x, int* y);

// main 函式開始執行程式
int main(void)
{
    // 初始化二維陣列 a，大小為 2xSIZE，並設為 0
    int a[2][SIZE] = { 0 }, mid, searchKey, index;

    puts("Data items in original order");

    // 輸入學生學號與成績
    for (size_t i = 0; i < SIZE; ++i) { // 用迴圈輸入學號與成績
        printf("input ID: ");
        scanf_s("%d", &a[0][i]); // 讀取學生學號
        printf("input score: ");
        scanf_s("%d", &a[1][i]); // 讀取學生成績
    }

    // 輸出原始資料順序
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]); // 輸出學號的原始順序
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]); // 輸出成績的原始順序

    // 呼叫排序函式，並取得中位數
    mid = sort_score(a, SIZE); // 執行排序並返回中位數

    puts("\nData items in descending order");

    // 輸出排序後的資料
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]); // 輸出排序後的學號
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]); // 輸出排序後的成績

    // 輸出中位數
    printf("\n中位數: %d", mid);
    puts("");
}

// 排序學號與成績，並返回中位數的成績
int sort_score(int a[2][SIZE], int len)
{
    int pass, i;

    // 使用冒泡排序法進行排序，根據成績按由大到小排序
    for (pass = 1; pass < len; ++pass) { 
        for (i = 0; i < len - 1; ++i) { 
            // 如果當前的成績小於後一個成績，則交換
            if (a[1][i] < a[1][i + 1]) {
                swap(&a[0][i], &a[0][i + 1]); // 交換學號
                swap(&a[1][i], &a[1][i + 1]); // 交換成績
            }
        }
    }

    // 返回中位數成績，位於中間索引位置
    return a[1][len / 2];
}

// 用來交換兩個數字的副程式，使用傳位址呼叫的方式
void swap(int* x, int* y)
{
    int temp = *x; // 使用臨時變數存儲 x 的值
    *x = *y; // 將 y 的值賦給 x
    *y = temp; // 將臨時變數的值賦給 y
}