#include <stdio.h>

int main()
{
    double x;
    int n;


    printf("請輸入 X 值: ");
    scanf_s("%lf", &x);
    printf("請輸入 n 值: ");
    scanf_s("%d", &n);

    double e_approx = 1.0;
    double e = 1.0;


    for (int i = 1; i <= n; i++) {
        e *= i;
        e_approx += (1.0 / e);
    }


    printf("e 的近似值 (x=%.2f, n=%d) 是: %.10f\n", x, n, e_approx);

    return 0;
}