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
        printf("��J�Ǹ�:");
        scanf_s("%d", &a[0][i]);
        printf("��J���Z:");
        scanf_s("%d", &a[1][i]);
    }

    printf("�Ǹ� ");
    for (size_t i = 0; i < SIZE; ++i) 
    {
        printf("%4d", a[0][i]);
    }
    printf("\n���Z ");
    for (size_t i = 0; i < SIZE; ++i) 
    {
        printf("%4d", a[1][i]);
    }

    mid = sort_score(a, SIZE);

    puts("\nData items in ascending order");

    printf("�Ǹ� ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n���Z ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    printf("\n�����: %d", mid);
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