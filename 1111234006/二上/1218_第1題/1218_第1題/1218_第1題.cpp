// 1218_第1題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
/*題目1. 請根據上一週的程式碼，運用"指標陣列"的方式透過鍵盤輸入學生姓名放入二維的字元陣列中，
透過排序副程式將學號、成績陣列以及字串陣列傳過去，並將學生成績由小到大排序，並適當交換姓名與學號，再由主程式印出。*/

#include <stdio.h>
#include <string.h> // 為了使用字符串處理函數（如 strcpy, strlen 等）
#define SIZE 5  // 定義學生數量為 5

// 函式原型宣告：用來排序學號、成績、姓名
int sort_score(int a[2][SIZE], char* names[SIZE], int len);
void swap(int* value_i, int* value_i_plus_1);
void swap_strings(char** str1, char** str2);

int main(void)
{
    // 初始化二維陣列 a 和指標陣列 names
    int a[2][SIZE] = { 0 }; // a[0] 存放學號，a[1] 存放成績
    char* names[SIZE]; 
    char name_buffer[SIZE][50]; 
    int mid;  

    // 顯示原始資料的提示
    puts("Data items in original order");

  
    for (size_t i = 0; i < SIZE; ++i) {
        printf("input ID: ");  // 提示輸入學號
        scanf_s("%d", &a[0][i]);  

        printf("input score: ");  // 提示輸入成績
        scanf_s("%d", &a[1][i]);  

        printf("input name: ");  // 提示輸入學生姓名
        scanf_s("%s", name_buffer[i]); 
        names[i] = name_buffer[i];  
    }

    // 顯示原始資料（學號、成績、姓名）
    printf("\n學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);  // 顯示所有學生的學號
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);  // 顯示所有學生的成績
    printf("\n姓名 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", names[i]);  // 顯示所有學生的姓名
    printf("\n");

    // 執行排序並取得中位數成績
    mid = sort_score(a, names, SIZE);

   
    puts("\nData items in ascending order");
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);  // 顯示排序後的學號
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);  // 顯示排序後的成績
    printf("\n姓名 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", names[i]);  // 顯示排序後的姓名

    // 顯示中位數成績
    printf("\n中位數: %d", mid);
    puts(""); 
}


int sort_score(int a[2][SIZE], char* names[SIZE], int len)
{
    int pass, i;  // pass 代表排序的輪數，i 代表比較的索引

    
    for (pass = 1; pass < len; ++pass) {  

        for (i = 0; i < len - 1; ++i) {
         
            if (a[1][i] > a[1][i + 1]) {
                swap(&a[1][i], &a[1][i + 1]);  // 交換成績
                swap(&a[0][i], &a[0][i + 1]);  // 交換對應的學號
                swap_strings(&names[i], &names[i + 1]); // 交換對應的姓名
            }
        }
    }

    // 返回排序後的中位數成績
    return a[1][len / 2]; 
}

// 交換兩個整數值的函數
void swap(int* value_i, int* value_i_plus_1)
{
    int tempPtr; 
    tempPtr = *value_i;  
    *value_i = *value_i_plus_1;  
    *value_i_plus_1 = tempPtr;  // 把暫存的 value_i 賦給 value_i_plus_1
}

// 交換兩個字串指標的函數（用來交換學生姓名）
void swap_strings(char** str1, char** str2)
{
    char* temp = *str1;  // 用來暫存其中一個字串指標
    *str1 = *str2;  // 把 str2 指向的字串賦給 str1
    *str2 = temp;  // 把暫存的 str1 賦給 str2
}


