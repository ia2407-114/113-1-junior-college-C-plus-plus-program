// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#include<string.h>
#define SIZE 2

typedef struct student {
    char name[20];
    int id, math, comput;
    float avg;
}stu;
int sort_score(stu my_class[SIZE],int len);
void printf_result(stu my_class[SIZE], int len);
//int linearSearch(int a[2][SIZE], int key, int size);
///int binarySearch(int b[][SIZE], int searchKey, int low, int high);
// function main begins program execution
int main(void)
{
    // initialize a
    stu my_class[SIZE] = { 0 };
    int i,mid;

    puts("Data items in original order");

    // output original array
    for ( i = 0; i < SIZE; ++i) {//輸入學號成績
        printf("input 姓名: ");
        scanf_s("%s", my_class[i].name,19);
        printf("input 學號: ");
        scanf_s("%d", &my_class[i].id);
        printf("input 數學成績: ");
        scanf_s("%d", &my_class[i].math);        
        printf("input 電腦成績: ");
        scanf_s("%d", &my_class[i].comput);
        my_class[i] .avg= (float)(my_class[i].math + my_class[i].comput) / 2;
    }


    // original order
    printf_result(my_class, SIZE);

    mid = sort_score(my_class, SIZE);

    puts("\nData items in ascending order");

    // output sorted array
    printf_result(my_class, SIZE);

    printf("\n中位數: %d", mid);
    puts("");

}


int sort_score(stu my_class[SIZE], int len)
{
    stu *temp,*myclass;
    
    int pass, i, hold, sum = 0;
    // bubble sort                                         
// loop to control number of passes                    
    for (pass = 1; pass < len; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < len - 1; ++i) {

            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (my_class[i].avg < my_class[i + 1].avg) {
            temp = &my_class[i];
            myclass = &my_class[i + 1];
            my_class[i+1] = *temp;
            my_class[i] = *myclass;
            //    temp = my_class[i];
            //    my_class[i] = my_class[i + 1];
            //    my_class[i + 1] = temp;
            }
        }
    }

    //for (i = 0;i < len;i++)
      //  sum += a[1][i];
    return my_class[len / 2].avg;
}

void printf_result(stu my_class[SIZE], int len)
{
    int i;
    printf("姓名          學號      數學      電腦      平均 \n ");
    for (i = 0; i < SIZE; ++i) {
        printf("%15s", my_class[i].name);
        printf("%10d", my_class[i].id);
        printf("%10d", my_class[i].math);
        printf("%10d", my_class[i].comput);
        printf("%10f\n", my_class[i].avg);
    }
}
