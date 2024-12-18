// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 5

void swapByreference(int* a1, int* a2);
void swapname(char* stu1, char* stu2);
int sort_score(int a[2][SIZE], char* stu[], int len);
int main(void)
{
    int a[2][SIZE] = { 0 }, mid;//, searchKey, index;
    char* names[SIZE];
    char stu_name[5][15];
    puts("輸入學生學號跟成績");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("學生%d\n", i +1);
        printf("輸入學號: ");
        scanf_s("%d", &a[0][i]);
        printf("輸入姓名: ");
        scanf_s("%s", stu_name[i],14);
        names[i] = stu_name[i];
        printf("輸入成績: ");
        scanf_s("%d", &a[1][i]);
    }


    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n姓名");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", names[i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);



    mid = sort_score(a, names, SIZE);

    puts("\n照分數低到高排序");

    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n姓名");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", names[i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);

    printf("\n中位數: %d", mid);
    puts("");

}

int sort_score(int a[2][SIZE], char* stu[], int len)
{
    int pass, i, hold, sum = 0;
    for (pass = 1; pass < len; ++pass) {

        for (i = 0; i < len - 1; ++i) {

            if (a[1][i] > a[1][i + 1]) {
                swapByreference(&a[0][i], &a[0][i + 1]);
                swapByreference(&a[1][i], &a[1][i + 1]);
                swapname(stu[i], stu[i+1]);
                /*   hold = a[1][i];
                   a[1][i] = a[1][i + 1];
                   a[1][i + 1] = hold;
                   hold = a[0][i];
                   a[0][i] = a[0][i + 1];
                   a[0][i + 1] = hold;*/
            }
        }
    }

    //for (i = 0;i < len;i++)
      //  sum += a[1][i];
    return a[1][len / 2];
}

void swapByreference(int* a1, int* a2)
{
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

void swapname(char* stu1, char* stu2) {
    char* temp;
    temp = stu2;
    stu2 = stu1;
    stu1 = temp;
}
