#include <stdio.h>

int main()
{
    double pi = 0.0, o = 1.0;
    int i = 0;
    int num = 0;

    printf("�п�J�ƶq==> \n");
    scanf_s("%d", &num);
    while (i <= num)
    {

        if (i % 2)
        {
            pi += (4.0 / o);

        }
        else
        {
            pi -= (4.0 / o);

        }
        o += 2;
        i++;

    }
    printf("pi =%lf \n", (pi * -1));
}
