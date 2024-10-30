//題目0: (主程式)請輸入一個X值與n值，以for迴圈算出階乘值，並根據以下公式計算出n項展開的計算結果，並印出結果。
//e = 1 + (1 / 1!) + (1 / 2!) + (1 / 3!) + ?

#include <stdio.h>
void main (void)
{
    int n,i;
    double const_e = 1.0, j = 1.0;
    printf("請輸入n的項數值：");
    scanf_s("%d", &n);

      for (i = 1; i <= n; i++)
    {
        j *= i;
        const_e += 1 / j;
    }
    printf("e的值為:%1f", const_e);
}