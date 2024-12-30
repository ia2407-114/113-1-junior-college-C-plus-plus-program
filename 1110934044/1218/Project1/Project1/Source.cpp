// Sorting an array's values into ascending order with names.
#include <stdio.h>
#include <string.h>
#define SIZE 5
#define NAME_LEN 20

void sort_score(int ids[], int scores[], char* names[], int len);
void swap_int(int* a, int* b);
void swap_string(char** str1, char** str2);

int main(void) {
    int ids[SIZE] = { 0 };        // �Ǹ��}�C
    int scores[SIZE] = { 0 };     // ���Z�}�C
    char names[SIZE][NAME_LEN]; // �s��ǥͩm�W���G���r���}�C
    char* name_ptrs[SIZE];      // ���а}�C�A���V�m�W

    // ��l�ƫ��а}�C���V�U�ǥͩm�W
    for (int i = 0; i < SIZE; ++i) {
        name_ptrs[i] = names[i];
    }

    // ��J�Ǹ��B�m�W�P���Z
    for (int i = 0; i < SIZE; ++i) {
        printf("Input ID for student %d: ", i + 1);
        scanf_s("%d", &ids[i]);
        printf("Input name for student %d: ", i + 1);
        scanf_s("%s", names[i],19);
        printf("Input score for student %d: ", i + 1);
        scanf_s("%d", &scores[i]);
    }

    // ��X��l���
    puts("\nData items in original order:");
    printf("�Ǹ�   �m�W              ���Z\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("%-6d %-15s %4d\n", ids[i], name_ptrs[i], scores[i]);
    }

    // �ƧǾǥͦ��Z�]�Ѥp��j�^
    sort_score(ids, scores, name_ptrs, SIZE);

    // ��X�Ƨǫ᪺���
    puts("\nData items in ascending order:");
    printf("�Ǹ�   �m�W              ���Z\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("%-6d %-15s %4d\n", ids[i], name_ptrs[i], scores[i]);
    }

    // ��ܤ����
    printf("\n�����: %d\n", scores[SIZE / 2]);

    return 0;
}

void sort_score(int ids[], int scores[], char* names[], int len) {
    for (int pass = 0; pass < len - 1; ++pass) {
        for (int i = 0; i < len - pass - 1; ++i) {
            if (scores[i] > scores[i + 1]) {
                // �洫���Z
                swap_int(&scores[i], &scores[i + 1]);
                // �洫�Ǹ�
                swap_int(&ids[i], &ids[i + 1]);
                // �洫�m�W
                swap_string(&names[i], &names[i + 1]);
            }
        }
    }
}

void swap_int(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_string(char** str1, char** str2) {
    char* temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
