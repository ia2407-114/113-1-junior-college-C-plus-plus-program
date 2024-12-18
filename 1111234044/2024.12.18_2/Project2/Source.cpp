#include <stdio.h>
#include <string.h>
#define SIZE 5
#define NAME_LEN 20

int sort_score(int a[2][SIZE], char* names[SIZE], int len);
void swap_int(int* value_i, int* value_i_plus_1);
void swap_string(char** str1, char** str2);

int main(void) {
    int a[2][SIZE] = { 0 };
    char names[SIZE][NAME_LEN], * namePtrs[SIZE];

    for (size_t i = 0; i < SIZE; ++i) {
        namePtrs[i] = names[i];
    }

    puts("�п�J�ǥ;Ǹ��B�m�W�P���Z");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("��J�Ǹ�: ");
        scanf_s("%d", &a[0][i]);
        printf("��J�m�W: ");
        scanf_s("%s", names[i], NAME_LEN);
        printf("��J���Z: ");
        scanf_s("%d", &a[1][i]);
    }

    printf("\n��l���:\n");
    printf("�Ǹ�\t�m�W\t���Z\n");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d\t%-10s\t%4d\n", a[0][i], namePtrs[i], a[1][i]);
    }

    int mid = sort_score(a, namePtrs, SIZE);

    puts("\n�Ƨǫ᪺��ơ]�����Z�ɧǡ^:");
    printf("�Ǹ�\t�m�W\t���Z\n");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d\t%-10s\t%4d\n", a[0][i], namePtrs[i], a[1][i]);
    }

    printf("\n����Ʀ��Z: %d\n", mid);

    return 0;
}

int sort_score(int a[2][SIZE], char* names[SIZE], int len) {
    for (int pass = 1; pass < len; ++pass) {
        for (int i = 0; i < len - 1; ++i) {
            if (a[1][i] > a[1][i + 1]) {
                swap_int(&a[1][i], &a[1][i + 1]);
                swap_int(&a[0][i], &a[0][i + 1]);
                swap_string(&names[i], &names[i + 1]);
            }
        }
    }
    return a[1][len / 2];
}

void swap_int(int* value_i, int* value_i_plus_1) {
    int temp = *value_i;
    *value_i = *value_i_plus_1;
    *value_i_plus_1 = temp;
}

void swap_string(char** str1, char** str2) {
    char* temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
