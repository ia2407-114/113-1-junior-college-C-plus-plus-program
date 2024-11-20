#include <stdio.h>

int main()

{
    double C, P;

    printf("請輸入本金");
    scanf_s("%lf", & C);
    printf("請輸入年利率(%)");
    scanf_s(" %lf", &P);

        double results[10];

    for (int i = 0; i < 10; ++i)
    {
        C*=(1 + P / 100);
            results[i] = C;
    }
    printf("未來10年的每年本利和如下\n");
        for (int i = 0; i < 10; ++i) {
            printf("第%d年：%1f元\n", i + 1, results[i]);
        }
    return 0;
}