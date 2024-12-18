#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], int len);
void Swap(int* a1, int* a2);

int main(void) {
    char* names[5];
    char stu_names[15][SIZE];
    int a[2][SIZE] = { 0 }, mid, searchKey, index;
    float A;
    double B;


    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i) {

        printf("input name:  ");
        scanf_s("%s", stu_names[i], 15);
        names[i] = stu_names[i];

        printf("input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("input score: ");
        scanf_s("%d", &a[1][i]);
    }
    printf("\n姓名");
    for (int i = 0; i < SIZE; i++)
        printf("%4s", stu_names[i]);
    printf("\n學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    mid = sort_score(a, SIZE);

    puts("\n\nData items in ascending order");
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    printf("\n中位數: %d", mid);
    puts("");
}

int sort_score(int a[2][SIZE], int len) {
    int pass, i;

    for (pass = 1; pass < len; ++pass) {
        for (i = 0; i < len - 1; ++i) {
            if (a[1][i] < a[1][i + 1]) {
                Swap(&a[1][i], &a[1][i + 1]);
                Swap(&a[0][i], &a[0][i + 1]);
            }
        }
    }

    return a[1][len / 2];
}

void Swap(int* a1, int* a2) {
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}