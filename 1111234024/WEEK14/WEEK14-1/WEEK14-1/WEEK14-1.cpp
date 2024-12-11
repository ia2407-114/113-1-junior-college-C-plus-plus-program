
#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], int len);
void swap(int arr[2][SIZE], int row, int col);
void swapByReference(int* a1, int* a2);

int main(void)
{   
    int a[2][SIZE] = { 0 }, mid ;

    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("input score: ");
        scanf_s("%d", &a[1][i]);
    }  
    printf("學號 ");

    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");

    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);
    mid = sort_score(a, SIZE);
    puts("\nData items in ascending order");    
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
    int pass, i;  
    for (pass = 1; pass < len; ++pass)
    {
        for (i = 0; i < len - 1; ++i)
        {
            if (a[1][i] > a[1][i + 1])
            { 
                swap(a, i, i + 1); 
            }
        }
    }    
    if (len % 2 == 1) 
    {
        return a[1][len / 2];  
    }
    else
    {
        return (a[1][len / 2 - 1] + a[1][len / 2]) / 2;
    }
}

void swap(int arr[2][SIZE], int row, int col)
{
    int temp;    
    temp = arr[0][row];
    arr[0][row] = arr[0][col];
    arr[0][col] = temp;    
    temp = arr[1][row];
    arr[1][row] = arr[1][col];
    arr[1][col] = temp;
}

void swapByReference(int* a1, int* a2)
{
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}