//�D��0: (�D�{��)�п�J�@��X�ȻPn�ȡA�Hfor�j���X�����ȡA�îھڥH�U�����p��Xn���i�}���p�⵲�G�A�æL�X���G�C
//e = 1 + (1 / 1!) + (1 / 2!) + (1 / 3!) + ?

#include <stdio.h>
void main (void)
{
    int n,i;
    double const_e = 1.0, j = 1.0;
    printf("�п�Jn�����ƭȡG");
    scanf_s("%d", &n);

      for (i = 1; i <= n; i++)
    {
        j *= i;
        const_e += 1 / j;
    }
    printf("e���Ȭ�:%1f", const_e);
}