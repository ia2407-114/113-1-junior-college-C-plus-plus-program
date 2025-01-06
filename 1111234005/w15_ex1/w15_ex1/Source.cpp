// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], char* name[SIZE], int len,int (*compare)(int a,int b));
void swapbyreference(int* a1, int* a2);
void swap_string(char** str1, char** str2);
int ascending(int a, int b);//���W
int descending(int a, int b);//����
// function main begins program execution
int main(void)
{
    // initialize a
    int a[2][SIZE] = { 0 }, mid, searchKey, index,i;
    char* name[SIZE];  // �x�s�ǥͩm�W�����а}�C
    char names[5][20];

    puts("Data items in original order");

    // ��J�ǥͪ��m�W�Ǹ��M���Z
    for (size_t i = 0; i < SIZE; ++i) {
        printf("input name:");
        scanf_s("%s", &names[i],19);
        name[i] = names[i];
        printf("input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("input score: ");
        scanf_s("%d", &a[1][i]);
    }



    // ��X��l���
    printf("\n�m�W");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", name[i]);
    printf("\n�Ǹ� ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n���Z ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);



    mid = sort_score(a, name, SIZE, ascending);

    puts("\nData items in ascending order");

    //�Ƨǫ�
    printf("\n�m�W");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", name[i]);
    printf("\n�Ǹ� ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n���Z ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    printf("\n�����: %d", mid);
    puts("");




}





int sort_score(int a[2][SIZE], char* name[SIZE], int len, int (*compare)(int a, int b))

{
    char* temp;
    int pass, i, hold, sum = 0;
    // bubble sort                                         
// loop to control number of passes   
     // �_�w�Ƨ�
    for (pass = 1; pass < len; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < len - 1; ++i) {

            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if ((*compare)(a[1][i] ,a[1][i + 1])){
                swap_string(&name[i], &name[i + 1]);       // �洫�m�W
                swapbyreference(&a[0][i], &a[0][i + 1]); // �洫�Ǹ�
                swapbyreference(&a[1][i], &a[1][i + 1]); // �洫���Z
            }
        }
    }

    //for (i = 0;i < len;i++)
      //  sum += a[1][i];
    return a[1][len / 2]; // ���] len �O�_�ơA��^�Ƨǫᤤ����m�����Z
}

void swap(int arr[2][SIZE], int row, int col)
{
    int temp;
    temp = arr[row][col];
    arr[row][col] = arr[row][col + 1];
    arr[row][col + 1] = temp;
}

void swapbyreference(int* a1, int* a2)
{
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

void swap_string(char** str1, char** str2)
{
    char* temp = *str1;
    *str1 = *str2; 
    *str2 = temp;
}

int ascending(int a, int b)
{
    return b < a;
}
int descending(int a, int b)
{
    return b > a;
}
