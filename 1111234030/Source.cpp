// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 5
typedef struct student {
    char name[20];
    int id, math, comput;
    double avg;
}stu;

int sort_score(stu myclass[SIZE], int len);
void printing(stu myclass[SIZE], int len);
//void swap(int* value_i, int* value_i_plus_1);
//int linearSearch(int a[2][SIZE], int key, int size);
///int binarySearch(int b[][SIZE], int searchKey, int low, int high);
// function main begins program execution
int main(void)
{
    stu myclass[SIZE];
    // initialize a
    //int a[2][SIZE] = { 0 }, mid, searchKey, index;
    int mid;
    //puts("Data items in original order");

    // output original array
    for (size_t i = 0; i < SIZE; ++i) {//輸入學號成績
        printf("輸入名字:\n");
        scanf_s("%s", myclass[i].name,19);
        printf("ID:\n");
        scanf_s("%d", &myclass[i].id);
        printf("數學成績:\n");
        scanf_s("%d", &myclass[i].math);
        printf("電腦成績:\n");
        scanf_s("%d", &myclass[i].comput);
        myclass[i].avg = (double)(myclass[i].math + myclass[i].comput) / 2;
    }


    // original order
    printing(myclass, SIZE);

    mid = sort_score(myclass, SIZE);

    puts("\nData items in descending order");

    // output sorted array
    printing(myclass, SIZE);

    printf("\n中位數:%d", mid);
    puts("");

}


int sort_score(stu myclass[SIZE], int len)
{
    int pass, i, hold, sum = 0;
    stu temp;
    // bubble sort                                         
// loop to control number of passes                    
    for (pass = 1; pass < len; ++pass) {

        // loop to control number of comparisons per pass   
        for (i = 0; i < len - 1; ++i) {

            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (myclass[i].avg < myclass[i + 1].avg) {
                temp = myclass[i];
                myclass[i] = myclass[i + 1];
                myclass[i + 1] = temp;

            }
        }
    }
    //for (i = 0;i < len;i++)
      //  sum += a[1][i];
    return myclass[len / 2].avg;
}

void printing(stu myclass[SIZE], int len) {
    printf("姓名     學號     數學     電腦     平均\n ");
        for (size_t i = 0; i < SIZE; ++i)
        {
            printf("%2s\t", myclass[i].name);
            printf("%2d\t", myclass[i].id);
            printf("%2d\t", myclass[i].math);
            printf("%2d\t", myclass[i].comput);
            printf("%2lf\n", myclass[i].avg);
        }
}

/*void swap(int* value_i, int* value_i_plus_1)
{
    int tempPtr;
    tempPtr = *value_i;
    *value_i = *value_i_plus_1;
    *value_i_plus_1 = tempPtr;
}*/