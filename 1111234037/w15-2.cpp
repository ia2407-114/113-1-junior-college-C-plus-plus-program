#include <stdio.h>
#include <string.h>
#define SIZE 5

int sort_score(int a[2][SIZE], char* wSuit[], int len, int (*compare)(int, int));
void swap(int* value_i, int* value_i_plus_1);
void swap_name(char** name_i, char** name_i_plus_1);
int ascending(int a, int b);
int descending(int a, int b);

int main(void)
{
    int a[2][SIZE] = { 0 }, mid, searchKey, index;
    char* suit[SIZE];
    char names[SIZE][21];
    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("input Name: ");
        scanf_s("%20s", names[i], 21);
        suit[i] = names[i];
        printf("input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("input score: ");
        scanf_s("%d", &a[1][i]);
    }

    printf("姓名 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%20s", suit[i]);
    printf("\n學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

  
    mid = sort_score(a, suit, SIZE, ascending);
 

    puts("\nData items in ascending order");

    printf("姓名 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%20s", suit[i]);
    printf("\n學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    printf("\n中位數: %d", mid);
    puts("");
}

int sort_score(int a[2][SIZE], char* wSuit[], int len, int (*compare)(int, int))
{
    int pass, i, hold, sum = 0;
    for (pass = 1; pass < len; ++pass) {
        for (i = 0; i < len - 1; ++i) {
            if (compare(a[1][i], a[1][i + 1])) {
                swap_name(&wSuit[i], &wSuit[i + 1]);
                swap(&a[1][i], &a[1][i + 1]);
                swap(&a[0][i], &a[0][i + 1]);
            }
        }
    }
    return a[1][len / 2];
}

void swap(int* value_i, int* value_i_plus_1)
{
    int tempPtr;
    tempPtr = *value_i;
    *value_i = *value_i_plus_1;
    *value_i_plus_1 = tempPtr;
}

void swap_name(char** name_i, char** name_i_plus_1)
{
    char* tempPtr;
    tempPtr = *name_i;
    *name_i = *name_i_plus_1;
    *name_i_plus_1 = tempPtr;
}

int ascending(int a, int b)
{
    return a > b;
}

int descending(int a, int b)
{
    return a < b;
}
