#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], int len);  
void swap(int* x, int* y);  
int linearSearch(int a[2][SIZE], int key, int size);  


int main(void)
{
    int a[2][SIZE] = { 0 }, mid, searchKey, index;  // 宣告並初始化陣列

    puts("Data items in original order");

   
    for (size_t i = 0; i < SIZE; ++i) {
        printf("input ID: ");
        scanf_s("%d", &a[0][i]);  // 輸入學號
        printf("input score: ");
        scanf_s("%d", &a[1][i]);  // 輸入成績
    }

    
    printf("\nEnter integer search key:");
    scanf_s("%d", &searchKey);
    index = linearSearch(a, searchKey, SIZE);  // 執行線性搜尋
    if (index != -1) {
        printf("Found value at index %d\n", index);
        printf("ID: %d, score:%d\n", a[0][index], a[1][index]);
    }
    else {
        puts("Value not found");
    }

  
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);  // 輸出學號
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);  // 輸出成績

    mid = sort_score(a, SIZE);  // 執行排序並取得中位數

    puts("\nData items in descending order");

    // 輸出排序後的資料
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);  
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);  

    printf("\n中位數: %d", mid); 
    puts("");
}


int sort_score(int a[2][SIZE], int len)
{
    int pass, i, mid;

    
    for (pass = 1; pass < len; ++pass) {
        for (i = 0; i < len - 1; ++i) {
            // 如果成績較小，則交換位置
            if (a[1][i] < a[1][i + 1]) {
                
                swap(&a[1][i], &a[1][i + 1]);  // 交換成績
                swap(&a[0][i], &a[0][i + 1]);  // 交換學號
            }
        }
    }

 
    mid = a[1][len / 2];
    return mid;
}


void swap(int* x, int* y)
{
    int temp = *x;  
    *x = *y;       
    *y = temp;      
}


int linearSearch(int array[2][SIZE], int key, int size)
{
    int n;
    // 遍歷陣列進行搜尋
    for (n = 0; n < size; ++n) {
        if (array[0][n] == key) {
            return n;  
        }
    }
    return -1; 
}
