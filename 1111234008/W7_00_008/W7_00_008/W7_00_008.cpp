#include <stdio.h>

int main()
{
    int n;
    printf("請輸入n值（展開項數）：");
    scanf_s("%d", &n);

    double e = 1.0;
    double j = 1.0;

    for (int i = 1; i <= n; i++)
    {
        j = j / i;
        e += j;
    }

    printf("%f\n", e);
    return 0;
}

