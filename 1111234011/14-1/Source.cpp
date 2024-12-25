#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], int len);
void Swap(int* a1, int* a2);

int main(void)
{
    int a[2][SIZE] = { 0 }, mid, searchKey, index;

    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("輸入學號:");
        scanf_s("%d", &a[0][i]);
        printf("輸入成績:");
        scanf_s("%d", &a[1][i]);
    }

    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i) 
    {
        printf("%4d", a[0][i]);
    }
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i) 
    {
        printf("%4d", a[1][i]);
    }

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
    int pass, i, hold, sum = 0;
               
    for (pass = 1; pass < len; ++pass) 
    {
        for (i = 0; i < len - 1; ++i) 
        {       
            if (a[1][i] < a[1][i + 1])
            {
                Swap(&a[1][i], &a[1][i + 1]);
                Swap(&a[0][i], &a[0][i + 1]);
            }
        }
    }

    return a[1][len / 2];
}

void Swap(int* a1, int* a2)
{
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}