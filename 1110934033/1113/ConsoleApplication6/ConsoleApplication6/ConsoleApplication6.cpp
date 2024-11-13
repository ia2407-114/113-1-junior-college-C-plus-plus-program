#include <stdio.h>

void bankcode(double principal, double rate, double result[]);

int main(void)
{
    double principal, rate, result[10];

    printf("請輸入本金：");
    scanf_s("%lf", &principal);
    printf("請輸入年利率 (例如輸入 5 表示 5%%)：");
    scanf_s("%lf", &rate);

    bankcode(principal, rate, result);
    printf("\n每年的本利和為：\n");
    for (int i = 0; i < 10; i++)
    {
        printf("第 %d 年：%.2f\n", i + 1, result[i]);
    }

    return 0;
}

void bankcode(double principal, double rate, double result[])
{
    for (int i = 0; i < 10; i++)
    {
        principal += principal * (rate / 100); // 計算本利和
        result[i] = principal;                 
    }
}

