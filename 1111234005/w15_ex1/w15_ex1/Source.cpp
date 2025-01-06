// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], char* name[SIZE], int len,int (*compare)(int a,int b));
void swapbyreference(int* a1, int* a2);
void swap_string(char** str1, char** str2);
int ascending(int a, int b);//遞增
int descending(int a, int b);//遞減
// function main begins program execution
int main(void)
{
    // initialize a
    int a[2][SIZE] = { 0 }, mid, searchKey, index,i;
    char* name[SIZE];  // 儲存學生姓名的指標陣列
    char names[5][20];

    puts("Data items in original order");

    // 輸入學生的姓名學號和成績
    for (size_t i = 0; i < SIZE; ++i) {
        printf("input name:");
        scanf_s("%s", &names[i],19);
        name[i] = names[i];
        printf("input ID: ");
        scanf_s("%d", &a[0][i]);
        printf("input score: ");
        scanf_s("%d", &a[1][i]);
    }



    // 輸出原始資料
    printf("\n姓名");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", name[i]);
    printf("\n學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);



    mid = sort_score(a, name, SIZE, ascending);

    puts("\nData items in ascending order");

    //排序後
    printf("\n姓名");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", name[i]);
    printf("\n學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    printf("\n中位數: %d", mid);
    puts("");




}





int sort_score(int a[2][SIZE], char* name[SIZE], int len, int (*compare)(int a, int b))

{
    char* temp;
    int pass, i, hold, sum = 0;
    // bubble sort                                         
// loop to control number of passes   
     // 冒泡排序
    for (pass = 1; pass < len; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < len - 1; ++i) {

            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if ((*compare)(a[1][i] ,a[1][i + 1])){
                swap_string(&name[i], &name[i + 1]);       // 交換姓名
                swapbyreference(&a[0][i], &a[0][i + 1]); // 交換學號
                swapbyreference(&a[1][i], &a[1][i + 1]); // 交換成績
            }
        }
    }

    //for (i = 0;i < len;i++)
      //  sum += a[1][i];
    return a[1][len / 2]; // 假設 len 是奇數，返回排序後中間位置的成績
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
