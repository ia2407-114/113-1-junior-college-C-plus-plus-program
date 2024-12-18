// 1218_第3題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
/*題目3. (承上題) 請請使用函數指標，並寫出acending(遞增)與descending(遞減)副程式，在呼叫排序副程式時，將上指標參數，
指向你所需要的排序副程式(ascending或descending)，完成想要的排序順序。*/

#include <stdio.h>
#include <string.h> 

#define SIZE 5  // 定義學生數量為 5

int sort_score(int a[2][SIZE], char* names[SIZE], int len, int (*compare)(int, int));
int ascending(int a, int b);
int descending(int a, int b);

void swap(int* value_i, int* value_i_plus_1); // 交換兩個整數的函式原型
void swap_strings(char** str1, char** str2); // 交換兩個字串指標的函式原型（用來交換學生姓名)

int main(void)
{
    int a[2][SIZE] = { 0 }; // a[0] 存放學號，a[1] 存放成績
    char* names[SIZE]; // 存放指向學生姓名的指標陣列
    char name_buffer[SIZE][50]; 
    int mid; 

    // 輸入學生資料
    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("input ID: "); 
        scanf_s("%d", &a[0][i]);

        printf("input score: ");  
        scanf_s("%d", &a[1][i]); 

        printf("input name: "); 
        scanf_s("%s", name_buffer[i]); 
        names[i] = name_buffer[i];  // 設定指標 names[i] 指向對應的學生姓名
    }

  
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

    // 排序並取得中位數（遞增排序）
    mid = sort_score(a, names, SIZE, ascending);

    // 顯示排序後的資料（遞增排序）
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

    // 排序並取得中位數（遞減排序）
    mid = sort_score(a, names, SIZE, descending);

    // 顯示排序後的資料（遞減排序）
    puts("\nData items in descending order");
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
    puts("");  // 顯示空行結束
}

// 排序學號、成績和姓名的函數，使用函數指標來選擇排序方式
int sort_score(int a[2][SIZE], char* names[SIZE], int len, int (*compare)(int, int))
{
    int pass, i;  // pass 代表排序的輪數，i 代表比較的索引

  
    for (pass = 1; pass < len; ++pass) {  
        for (i = 0; i < len - 1; ++i) {  
            // 根據傳入的 compare 函數來比較成績
            if (compare(a[1][i], a[1][i + 1])) {
                swap(&a[1][i], &a[1][i + 1]);  // 交換成績
                swap(&a[0][i], &a[0][i + 1]);  // 交換對應的學號
                swap_strings(&names[i], &names[i + 1]); // 交換對應的姓名
            }
        }
    }

    // 返回排序後的中位數成績
    return a[1][len / 2]; 
}

int ascending(int a, int b)
{
    return a > b;
}

int descending(int a, int b)
{
    return a < b;
}

// 交換兩個整數值的函數
void swap(int* value_i, int* value_i_plus_1)
{
    int tempPtr;  
    tempPtr = *value_i; 
    *value_i = *value_i_plus_1; 
    *value_i_plus_1 = tempPtr;  
}

// 交換兩個字串指標的函數（用來交換學生姓名）
void swap_strings(char** str1, char** str2)
{
    char* temp = *str1;  
    *str1 = *str2; 
    *str2 = temp; 
}
