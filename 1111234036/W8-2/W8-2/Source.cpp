#include <stdio.h>
int power(int n, int k);
int main()
{
    int n, k;
    printf("�п�Jn���ȡG");
    scanf_s("%d", &n);
    printf("�п�Jk���ȡG");
    scanf_s("%d", &k);
    int j = power(n, k);
    printf("%d��%d����O: %d\n", n, k, j);
    return 0;
}
int power(int n, int k)
{
    if (k <= 0)
        return 1;
    else
        return n * power(n, k - 1);
}