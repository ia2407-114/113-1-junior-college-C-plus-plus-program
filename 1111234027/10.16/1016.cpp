#include <stdio.h>


int main()
{
    int i, n;

    printf("�п�J�n��ܪ��ƶq \n ");
    scanf_s("%d", &n );

    for (i = 1; i <= n; i++)
    {
        printf("%d ������O %d\n", i, i * i);
    }

    return 0;
}