#include <stdio.h>

int main(void)
{
    int n, i;
    double const_e = 1.0, j = 1.0;

    printf("�п�Jn�����ƭ�:");
    scanf_s("%d", &n);


    for (int i = 1; i <= n; i++)
    {
        j *= i;
        const_e += 1 / j;
    }

    printf("e���Ȭ�:%lf", const_e);
    return 0;
}
