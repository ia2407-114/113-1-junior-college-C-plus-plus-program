// 1218_第2題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
/*題目2. (呈上題) 請寫出一個交換副程式，專門負責排序時交換學生姓名，將兩位要互換姓名的字串指標傳入到該副程式中，
透過指標變數交換，完成字串姓名的內容交換。*/

#include <stdio.h>
#include <string.h> // 為了使用字符串處理函數

#define SIZE 5  // 設定學生的數量

// 函式原型宣告
int sort_score(int a[2][SIZE], char* names[SIZE], int len); // 排序學號、成績和姓名
void swap(int* value_i, int* value_i_plus_1); // 交換兩個整數值
void swap_strings(char** str1, char** str2); 
int puts(const char* str);

int main(void)
{
    // 初始化二維陣列 a 和指標陣列 names
    int a[2][SIZE] = { 0 };
    char* names[SIZE]; 
    char name_buffer[SIZE][50]; 
    int mid; 

    // 輸入學生資料
    puts("Data items in original order");

    // 讀取學號、成績和姓名
    for (size_t i = 0; i < SIZE; ++i) {
        printf("input ID: ");  
        scanf_s("%d", &a[0][i]); 

        printf("input score: ");  
        scanf_s("%d", &a[1][i]); 

        printf("input name: "); 
        scanf_s("%s", name_buffer[i]);  
        names[i] = name_buffer[i];   
    }

    // 顯示原始資料
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

    // 排序學生資料並取得中位數
    mid = sort_score(a, names, SIZE);

    // 顯示排序後的資料
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

// 排序學號、成績和姓名的函數
int sort_score(int a[2][SIZE], char* names[SIZE], int len)
{
    int pass, i;

    
    for (pass = 1; pass < len; ++pass) {  
        for (i = 0; i < len - 1; ++i) {  
            // 當成績 a[1][i] 大於 a[1][i + 1] 時，交換這兩個元素
            if (a[1][i] > a[1][i + 1]) {
                swap(&a[1][i], &a[1][i + 1]);  // 交換成績
                swap(&a[0][i], &a[0][i + 1]);  // 交換對應的學號
                swap_strings(&names[i], &names[i + 1]); // 交換對應的姓名
            }
        }
    }

    return a[1][len / 2]; // 返回中位數成績（排序後的中間成績）
}

// 交換兩個整數的函數
void swap(int* value_i, int* value_i_plus_1)
{
    int tempPtr;  
    tempPtr = *value_i;  
    *value_i = *value_i_plus_1;  
    *value_i_plus_1 = tempPtr;  
}

// 交換兩個字串指標的函數（交換學生姓名）
void swap_strings(char** str1, char** str2)
{
    char* temp = *str1;  
    *str1 = *str2;  
    *str2 = temp; 
}
