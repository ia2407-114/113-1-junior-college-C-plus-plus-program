#include <stdio.h>
int power(int base, int n);

int main(void)
{
    int nn = 0,kk=0;
    printf("�п�Jn:\n");
    scanf_s("%d", &nn);
    printf("�п�Jk:\n");
    scanf_s("%d", &kk);
    power(nn, kk);

    int result = power(nn, kk); 
    printf("%d �� %d ����O %d\n", nn, kk, result); 

    return 0;
}
int power(int base, int n)
{
    if (n <= 0)
        return 1;
    else
        return base * power(base, n - 1);
}