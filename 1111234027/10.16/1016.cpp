#include <stdio.h>


int main()
{
    int i, n;

    printf("請輸入要顯示的數量 \n ");
    scanf_s("%d", &n );

    for (i = 1; i <= n; i++)
    {
        printf("%d 的平方是 %d\n", i, i * i);
    }

    return 0;
}