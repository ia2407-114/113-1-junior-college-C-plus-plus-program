#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], int len);
int linearSearch(int a[2][SIZE], int key, int size);
int binarySearch(int b[][SIZE], int searchKey, int low, int high);
void swap(int* x, int* y);  

int main(void)
{
    int a[2][SIZE] = { 0 }, mid, searchKey, index;

    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("input score: ");
        scanf_s("%d", &a[1][i]);
    }

    printf("\nEnter integer search key:");
    scanf_s("%d", &searchKey);

    index = linearSearch(a, searchKey, SIZE);
    if (index != -1) {
        printf("Found value at index %d\n", index);
        printf("ID: %d, score: %d\n", a[0][index], a[1][index]);
    }
    else {
        puts("Value not found");
    }

    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    mid = sort_score(a, SIZE);

    puts("\nData items in descending order (by score)");

    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    printf("\n中位數: %d", mid);
    puts("");

    printf("\nEnter integer search key:");
    scanf_s("%d", &searchKey);

    index = binarySearch(a, searchKey, 0, SIZE - 1);
    if (index != -1) {
        printf("Found value at index %d\n", index);
        printf("ID: %d, score: %d\n", a[0][index], a[1][index]);
    }
    else {
        puts("Value not found");
    }
}

int binarySearch(int b[][SIZE], int searchKey, int low, int high)
{
    while (low <= high) {
        size_t middle = (low + high) / 2;

        if (searchKey == b[0][middle]) {
            return middle;
        }
        else if (searchKey < b[0][middle]) {
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }

    return -1;
}

int sort_score(int a[2][SIZE], int len)
{
    int pass, i;

    for (pass = 1; pass < len; ++pass) {
        for (i = 0; i < len - 1; ++i) {
            if (a[1][i] < a[1][i + 1]) {
                swap(&a[1][i], &a[1][i + 1]); 
                swap(&a[0][i], &a[0][i + 1]); 
            }
        }
    }

    return a[1][len / 2]; 
}

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int linearSearch(int array[2][SIZE], int key, int size)
{
    for (int n = 0; n < size; ++n) {
        if (array[0][n] == key) {
            return n;
        }
    }
    return -1;
}
