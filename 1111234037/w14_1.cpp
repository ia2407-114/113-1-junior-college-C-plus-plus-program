#include <stdio.h>
#define SIZE 5

void swap(int* a, int* b);
int sort_score(int a[2][SIZE], int len);

int main(void)
{
    int a[2][SIZE] = { 0 }, mid;

    puts("Data items in original order");


    for (size_t i = 0; i < SIZE; ++i) {
        printf("input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("input score: ");
        scanf_s("%d", &a[1][i]);
    }

    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i) printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i) printf("%4d", a[1][i]);

    mid = sort_score(a, SIZE);

    puts("\nData items in descending order");

    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i) printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i) printf("%4d", a[1][i]);

    printf("\n中位數: %d", mid);
    puts("");

    return 0;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sort_score(int a[2][SIZE], int len)
{
    for (int pass = 1; pass < len; ++pass) {
        for (int i = 0; i < len - 1; ++i) {
            if (a[1][i] < a[1][i + 1]) { 
                swap(&a[0][i], &a[0][i + 1]);
                swap(&a[1][i], &a[1][i + 1]);
            }
        }
    }
    return a[1][len / 2];
}
