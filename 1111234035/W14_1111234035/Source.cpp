#include <stdio.h>
#define SIZE 5

void swap(int a[2][SIZE], int row, int col);
void swapByference(int* a1, int* a2);

int sort_score(int a[2][SIZE], int len);
//int linearSearch(int a[2][SIZE], int key, int size);
//int binarySearch(int b[][SIZE], int searchKey, int low, int high);
int main(void)
{
    // initialize a
    int a[2][SIZE] = { 0 }, mid, searchKey, index;

    puts("Data items in original order");

    // output original array
    for (size_t i = 0; i < SIZE; ++i) {//輸入學號成績
        printf("input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("input score: ");
        scanf_s("%d", &a[1][i]);
    }


    // original order
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);



    mid = sort_score(a, SIZE);

    puts("\nData items in ascending order");

    // output sorted array
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    printf("\n中位數: %d", mid);
    puts("");
}





int sort_score(int a[2][SIZE], int len)
{
    int pass, i, hold, sum = 0;
    // bubble sort                                         
// loop to control number of passes                    
    for (pass = 1; pass < len; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < len - 1; ++i) {

            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (a[1][i] > a[1][i + 1]) {
                swapByference(&a[1][i],&a[1][i+1]);
                swapByference(&a[0][i],&a[0][i + 1]);
            }
        }
    }

    //for (i = 0;i < len;i++)
      //  sum += a[1][i];
    return a[1][len / 2];
}

void swap(int a[2][SIZE],int row,int col) {
    int temp;
    temp = a[row][col];
        a[row][col] = a[row][col + 1];
        a[row][col + 1] = temp;
}

void swapByference(int* a1, int* a2) {
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}