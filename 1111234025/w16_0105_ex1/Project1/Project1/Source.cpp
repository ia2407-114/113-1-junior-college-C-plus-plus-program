#include <stdio.h>
#define SIZE 5

typedef struct student {
    char name[20];
    int id, math, comput;
    float avg;
}stu;


int sort_score(stu my_class[SIZE], int len);
void print_result(stu my_class[SIZE], int len);
int main(void)
{

    stu my_class[SIZE];
   
    int mid, searchKey, index, len;

    puts("Data items in original order");

    
    for (size_t i = 0; i < SIZE; ++i) {
        printf("input Name: ");
        scanf_s("%s", my_class[i].name, 19);
        printf("input ID: ");
        scanf_s("%d", &my_class[i].id);
        printf("input math: ");
        scanf_s("%d", &my_class[i].math);
        printf("input comput: ");
        scanf_s("%d", &my_class[i].comput);
        my_class[i].avg = (float)(my_class[i].math + my_class[i].comput) / 2;
    }


   
    print_result(my_class, SIZE);

    mid = sort_score(my_class, SIZE);

    puts("\nData items in ascending order");

    
    print_result(my_class, SIZE);
    printf("\n中位數: %d", mid);
    puts("");

}


int sort_score(stu my_class[SIZE], int len)
{
    stu temp;
    int pass, i, hold, sum = 0;
                       
    for (pass = 1; pass < len; ++pass) {

       
        for (i = 0; i < len - 1; ++i) {

                     
            if (my_class[i].avg > my_class[i + 1].avg)
            {
                temp = my_class[i];
                my_class[i] = my_class[i + 1];
                my_class[i + 1] = temp;

            }
        }
    }

    
    return my_class[len / 2].avg;
}

void print_result(stu my_class[SIZE], int len)
{
    printf("姓名    學號   數學   電腦  平均\n ");
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%10s", my_class[i].name);
        printf("%4d", my_class[i].id);
        printf("%4d", my_class[i].math);
        printf("%4d", my_class[i].comput);
        printf("%4.2f\n", my_class[i].avg);

    }
}