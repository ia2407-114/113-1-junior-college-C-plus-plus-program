#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], int len);  
void swap(int* x, int* y);  
int linearSearch(int a[2][SIZE], int key, int size);  


int main(void)
{
    int a[2][SIZE] = { 0 }, mid, searchKey, index;  // �ŧi�ê�l�ư}�C

    puts("Data items in original order");

   
    for (size_t i = 0; i < SIZE; ++i) {
        printf("input ID: ");
        scanf_s("%d", &a[0][i]);  // ��J�Ǹ�
        printf("input score: ");
        scanf_s("%d", &a[1][i]);  // ��J���Z
    }

    
    printf("\nEnter integer search key:");
    scanf_s("%d", &searchKey);
    index = linearSearch(a, searchKey, SIZE);  // ����u�ʷj�M
    if (index != -1) {
        printf("Found value at index %d\n", index);
        printf("ID: %d, score:%d\n", a[0][index], a[1][index]);
    }
    else {
        puts("Value not found");
    }

  
    printf("�Ǹ� ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);  // ��X�Ǹ�
    printf("\n���Z ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);  // ��X���Z

    mid = sort_score(a, SIZE);  // ����ƧǨè��o�����

    puts("\nData items in descending order");

    // ��X�Ƨǫ᪺���
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
    int pass, i, mid;

    
    for (pass = 1; pass < len; ++pass) {
        for (i = 0; i < len - 1; ++i) {
            // �p�G���Z���p�A�h�洫��m
            if (a[1][i] < a[1][i + 1]) {
                
                swap(&a[1][i], &a[1][i + 1]);  // �洫���Z
                swap(&a[0][i], &a[0][i + 1]);  // �洫�Ǹ�
            }
        }
    }

 
    mid = a[1][len / 2];
    return mid;
}


void swap(int* x, int* y)
{
    int temp = *x;  
    *x = *y;       
    *y = temp;      
}


int linearSearch(int array[2][SIZE], int key, int size)
{
    int n;
    // �M���}�C�i��j�M
    for (n = 0; n < size; ++n) {
        if (array[0][n] == key) {
            return n;  
        }
    }
    return -1; 
}
