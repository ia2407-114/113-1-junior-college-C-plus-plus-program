//題目1.寫一個主程式，透過鍵盤輸入本金、年利率，再建立一個副程式傳入這三個參數，計算每年的本利和之後傳回放入陣列中一共10年，並且印出陣列內本利和結果。
#include <stdio.h>

int main()
{
    double f, p;

    printf("請輸入本金");
    scanf_s("%lf", &f);
    printf("請輸入年利率(%)");
    scanf_s("%lf", &p);

    double results[10];

    for (int i = 0; i < 10; ++i)
    {
        f *= (1 + p / 100);
        results[i] = f;
    }

    printf("未來10年的每年本利和如下\n");

    for (int i = 0; i < 10; ++i) {
        printf("第%d年: %lf元\n", i + 1, results[i]);
    }

    return 0;
}