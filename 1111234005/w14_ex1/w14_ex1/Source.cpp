// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], int len);
void swapbyreference(int* a1, int* a2);
// function main begins program execution
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
            if (a[1][i] < a[1][i + 1]) {
                swapbyreference(&a[0][i], &a[0][i + 1]);// Swap IDs
                swapbyreference(&a[1][i], &a[1][i + 1]);// Swap scores
            }
        }
    }

    //for (i = 0;i < len;i++)
      //  sum += a[1][i];
    return a[1][len / 2];
}

void swap(int arr[2][SIZE], int row, int col)
{
    int temp;
    temp = arr[row][col];
    arr[row][col] = arr[row][col + 1];
    arr[row][col + 1] = temp;
}

void swapbyreference(int*a1,int*a2)
{
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}
