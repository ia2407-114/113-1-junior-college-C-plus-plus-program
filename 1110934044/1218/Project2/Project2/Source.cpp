#include <stdio.h>
#include <string.h>
#define SIZE 5
#define NAME_LEN 20

void sort_score(int ids[], int scores[], char* names[], int len);
void swap_int(int* a, int* b);
void swap_name_content(char* name1, char* name2);

int main(void) {
    int ids[SIZE] = { 0 };
    int scores[SIZE] = { 0 };
    char names[SIZE][NAME_LEN];
    char* name_ptrs[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        name_ptrs[i] = names[i];
    }

    for (int i = 0; i < SIZE; ++i) {
        printf("Input ID for student %d: ", i + 1);
        scanf_s("%d", &ids[i]);
        printf("Input name for student %d: ", i + 1);
        scanf_s("%s", names[i],19);
        printf("Input score for student %d: ", i + 1);
        scanf_s("%d", &scores[i]);
    }

    puts("\nBefore Sorting:");
    for (int i = 0; i < SIZE; ++i) {
        printf("ID: %d, Name: %s, Score: %d\n", ids[i], name_ptrs[i], scores[i]);
    }

    sort_score(ids, scores, name_ptrs, SIZE);

    puts("\nAfter Sorting:");
    for (int i = 0; i < SIZE; ++i) {
        printf("ID: %d, Name: %s, Score: %d\n", ids[i], name_ptrs[i], scores[i]);
    }

    return 0;
}

void sort_score(int ids[], int scores[], char* names[], int len) {
    for (int pass = 0; pass < len - 1; ++pass) {
        for (int i = 0; i < len - pass - 1; ++i) {
            if (scores[i] > scores[i + 1]) {
                swap_int(&scores[i], &scores[i + 1]);
                swap_int(&ids[i], &ids[i + 1]);
                swap_name_content(names[i], names[i + 1]);
            }
        }
    }
}

void swap_int(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_name_content(char* name1, char* name2) {
    char temp[NAME_LEN];
    strcpy(temp, name1);
    strcpy(name1, name2);
    strcpy(name2, temp);
}
