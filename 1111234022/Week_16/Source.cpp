
#include <stdio.h>
#include <string.h>
#define SIZE 5
typedef struct student
{
    char name[20] = "";
    int id, math, comput;
    float avg;

}stu;
int sort_score(stu my_class[SIZE], int len);     //宣告交換函數
void printf_result(stu my_class[SIZE], int len);  // 宣告輸出最後結果函數

int main(void)
{
    stu my_class[SIZE]; //宣告stu結構型態變數
    
    int  mid;

    puts("Data items in original order");

    //輸入學號成績
    for (int  i = 0; i < SIZE; ++i) 
    {       
        printf("input name  ");
        scanf_s("%s", my_class[i].name, 19);
        printf("input ID  ");
        scanf_s("%d", &my_class[i].id);
        printf("input math  ");
        scanf_s("%d", &my_class[i].math);
        printf("input comput  ");
        scanf_s("%d", &my_class[i].comput);
        my_class[i].avg = (float)(my_class[i].math + my_class[i].comput) / 2;
    }


    //原始排序
    printf("\n%s%8s%8s%8s%8s\n", "姓名", "學號", "數學", "計概", "平均");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s", my_class[i].name);
        printf("%8d", my_class[i].id);
        printf("%8d", my_class[i].math);
        printf("%8d", my_class[i].comput);
        printf("%15f\n", my_class[i].avg);
    
    }


    //呼叫交換函數以平均進行由小到大排序
    mid = sort_score(my_class, SIZE);

    puts("\nData items in ascending order\n");

    
    printf_result(my_class, SIZE);

    printf("\n中位數: %d", mid);
    puts("");

}

//交換函數
int sort_score(stu my_class[SIZE], int len)
{
    stu temp;
    int pass, i = 0;
                      
    for (pass = 1; pass < len; ++pass) {

          
        for (i = 0; i < len - 1; ++i) {

                
            if (my_class[i].avg > my_class[i+1].avg)
            {
                temp = my_class[i];
                my_class[i] = my_class[i + 1];
                my_class[i + 1] = temp;
            }
        }
    }

    
    return my_class[len / 2].avg;
}

//輸出交換後排序函數
void printf_result(stu my_class[SIZE], int len)
{
    printf("\n%s%8s%8s%8s%8s\n", "姓名", "學號", "數學", "計概", "平均");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s", my_class[i].name);
        printf("%8d", my_class[i].id);
        printf("%8d", my_class[i].math);
        printf("%8d", my_class[i].comput);
        printf("%15f\n", my_class[i].avg);

    }
}