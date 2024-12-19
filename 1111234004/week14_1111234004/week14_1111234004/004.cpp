// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], int len);
void swap(int arr[2][SIZE], int row, int col);
void swapByReference(int* al, int* a2);

int linearSearch(int a[2][SIZE], int key, int size);
int binarySearch(int b[][SIZE], int searchKey, int low, int high);
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



    printf("\nEnter integer search key:");
    scanf_s("%d", &searchKey);
    index = linearSearch(a, searchKey, SIZE);
    if (index != -1) {
        printf("Found value at index %d\n", index);
        printf("ID: %d, score:%d\n", a[0][index], a[1][index]);
    }
    else {
        puts("Value not found");
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




    printf("\nEnter integer search key:");
    scanf_s("%d", &searchKey);
    index = binarySearch(a, searchKey, 0, SIZE - 1);
    if (index != -1) {
        printf("Found value at index %d\n", index);
        printf("ID: %d, score:%d\n", a[0][index], a[1][index]);
    }
    else {
        puts("Value not found");
    }




}





// function to perform binary search of an array
int binarySearch(int b[][SIZE], int searchKey, int low, int high)
{
    // loop until low index is greater than high index
    while (low <= high) {//判斷是否需要搜尋下去? 

       // determine middle element of subarray being searched
        size_t middle = (low + high) / 2;

        // display subarray used in this loop iteration
        //printRow(b, low, middle, high);

        // if searchKey matched middle element, return middle
        if (searchKey == b[0][middle]) {
            return middle;
        }

        // if searchKey is less than middle element, set new high
        else if (searchKey < b[0][middle]) {
            high = middle - 1; // search low end of array      
        }

        // if searchKey is greater than middle element, set new low
        else {
            low = middle + 1; // search high end of array        
        }
    } // end while

    return -1; // searchKey not found
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
                swapByReference(&a[1][i], &a[1][i + 1]);
                swapByReference(&a[0][i], &a[0][i + 1]);
            }
        }
    }

    //for (i = 0;i < len;i++)
      //  sum += a[1][i];
    return a[1][len / 2];
}
void swap(int arr[2][SIZE], int row, int col)//傳值呼叫
{
    int temp;
    temp = arr[row][col];
    arr[row][col] = arr[row][col + 1];
    arr[row][col + 1] = temp;
}
void swapByReference(int* a1, int* a2)//傳地址呼叫
{
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}
int linearSearch(int array[2][SIZE], int key, int size)
{
    int n;
    // 遍歷陣列進行搜尋
    for (n = 0; n < size; ++n) {
        if (array[0][n] == key) {
            return n;  // 找到學號，回傳位置
        }
    }
    return -1;  // 沒有找到學號，回傳 -1
}