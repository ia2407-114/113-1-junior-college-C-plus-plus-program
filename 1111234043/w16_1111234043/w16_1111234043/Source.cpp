#include <stdio.h>
#define SIZE 5
#define NAME_SIZE 15

int sort_score(int a[2][SIZE], char* names[SIZE], int len, int (*compare)(int a, int b));
void swap(int* value_i, int* value_i_plus_1);
void swap_name(char** stu1, char** stu2);
int ascending(int a, int b);
int decending(int a, int b);
int main(void) {
    int a[2][SIZE] = { 0 }, mid;
    char stu_name[SIZE][NAME_SIZE];
    char* names[SIZE];

    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("Input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("Input score: ");
        scanf_s("%d", &a[1][i]);
        printf("輸入姓名: ");
        scanf_s("%s", stu_name[i], 14);
        names[i] = stu_name[i];
    }

    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%15d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%15d", a[1][i]);
    printf("\n姓名");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%15s", names[i]);

    mid = sort_score(a, names, SIZE, ascending);

    puts("\nData items in ascending order");

    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%15d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%15d", a[1][i]);
    printf("\n姓名 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%15s", names[i]);
    printf("\n中位數: %d", mid);
    puts("");

    return 0;
}

int sort_score(int a[2][SIZE], char* names[SIZE], int len, int (*compare)(int a, int b)) {
    for (int pass = 1; pass < len; ++pass) {
        for (int i = 0; i < len - 1; ++i) {
            if ((*compare)(a[1][i], a[1][i + 1]))
            {
                swap(&a[1][i], &a[1][i + 1]);
                swap(&a[0][i], &a[0][i + 1]);
                swap_name(&names[i], &names[i + 1]);
            }
        }
    }
    return a[1][len / 2];
}
int ascending(int a, int b)
{
    return a > b;
}
int decending(int a, int b)
{
    return a < b;
}
void swap(int* value_i, int* value_i_plus_1) {
    int temp = *value_i;
    *value_i = *value_i_plus_1;
    *value_i_plus_1 = temp;
}

void swap_name(char** stu1, char** stu2) {
    char* temp = *stu1;
    *stu1 = *stu2;
    *stu2 = temp;
}