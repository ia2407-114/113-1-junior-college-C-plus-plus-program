#include <stdio.h>

// 副程式：計算每年的本利和
void c(double p, double rate, double jia[], int years) 
{
    for (int i = 0; i < years; i++) 
    {
        p += p * rate / 100;
        jia[i] = p;
    }
}

int main() {
    double p, rate;
    int years = 10;
    double jia[10];

    // 透過鍵盤輸入本金和年利率
    printf("輸入本金: ");
    scanf_s("%lf", &p);
    printf("輸入年利率（百分比）: ");
    scanf_s("%lf", &rate);

    // 調用副程式計算本利和
    c(p, rate, jia, years);

    // 輸出結果
    printf("每年的本利和結果如下:\n");
    for (int i = 0; i < years; i++) {
        printf("第 %d 年: %.2f\n", i + 1, jia[i]);
    }

    return 0;
}
