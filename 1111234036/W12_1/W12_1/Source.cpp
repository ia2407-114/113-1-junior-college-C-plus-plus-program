#include <stdio.h>

float avg_score(int arr[4][5], char names[5][10], int len);

int main(void)
{
    int n[4][5] = { 0 };
    char names[5][10];
    float avg = 0;
    for (size_t i = 0; i < 5; ++i) {
        printf("\n請輸入學生%d的學號:", i);
        scanf_s("%d", &n[0][i]);
        printf("\n請輸入學生%d的計概成績:", i);
        scanf_s("%d", &n[1][i]);
        printf("\n請輸入學生%d的數學成績:", i);
        scanf_s("%d", &n[2][i]);
        printf("\n請輸入學生%d的姓名:", i);
        scanf_s("%s", names[i], 10);
    }
    printf("全班總平均: %f \n", avg_score(n, names, 5));
    printf("%s%8s%8s%8s\n", "學號", "計概", "數學", "平均");


    for (size_t i = 0; i < 5; ++i) {

        printf("%s%d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

}


float avg_score(int arr[4][5], char names[5][10], int len)
{
    float average = 0;
    int i;
    for (i = 0; i < len; i++)
    {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
        average += arr[3][i];
    }
    return average / len;

}