/*�Ыإ�C�{���A��J���ؼƶq�A�çQ��while�j��p��X�H�U�ƦC:
pi=4-(4/3)+(4/5)-(4/7)+(4/9)-(4/11)+...
�åB�L�Xpi�����G�C(���ؼƶq�U�h�A��T�׷U��)*/

#include <stdio.h>

int main()
{
    int n , i = 0;
    double pi = 0.0 , j = 1.0 ;

    printf("�п�J���ؼƶq n: ");
    scanf_s("%d", &n);

    while (i <= n)
    {
        if (i % 2)
        {
            pi += (4.0 / j);
        }
        else
        {
            pi -= (4.0 / j);
        }
        j += 2;
        i++;
    }
   
    printf("%lf",pi*-1);

}
