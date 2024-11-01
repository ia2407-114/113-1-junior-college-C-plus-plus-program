#include <stdio.h>
int power(int n, int k);
int main()
{
    int n, k;
    printf("請輸入n的值：");
    scanf_s("%d", &n);
    printf("請輸入k的值：");
    scanf_s("%d", &k);
    int j = power(n, k);
    printf("%d的%d次方是: %d\n", n, k, j);
    return 0;
}
int power(int n, int k)
{
    if (k <= 0)
        return 1;
    else
        return n * power(n, k - 1);
}