
#include <stdio.h>
#define SIZE 5
void swapByReference(int* a1, int* a2);
int sort_score_descending(int a[2][SIZE], int len);

int main(void) {
    int a[2][SIZE] = { 0 }, mid;

    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("Input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("Input score: ");
        scanf_s("%d", &a[1][i]);
    }

    printf("\n學號: ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績: ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    mid = sort_score_descending(a, SIZE);

    puts("\n\nData items in descending order");

    printf("學號: ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績: ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    printf("\n中位數: %d", mid);
    puts("");

    return 0;
}

int sort_score_descending(int a[2][SIZE], int len) {
    for (int pass = 1; pass < len; ++pass) {
        for (int i = 0; i < len - 1; ++i) {
            if (a[1][i] < a[1][i + 1]) {
                swapByReference(&a[1][i], &a[1][i + 1]);
                swapByReference(&a[0][i], &a[0][i + 1]);
            }
        }
    }
    return a[1][len / 2];
}

void swapByReference(int* a1, int* a2) {
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}
