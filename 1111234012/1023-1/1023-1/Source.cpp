#include <stdio.h>

int main()
{
    double x;
    int n;


    printf("�п�J X ��: ");
    scanf_s("%lf", &x);
    printf("�п�J n ��: ");
    scanf_s("%d", &n);

    double e_approx = 1.0;
    double e = 1.0;


    for (int i = 1; i <= n; i++) {
        e *= i;
        e_approx += (1.0 / e);
    }


    printf("e ������� (x=%.2f, n=%d) �O: %.10f\n", x, n, e_approx);

    return 0;
}