#include <stdio.h>


int main()
{
    int number, i = 1;
    int one = 0;
    int two = 0;
    printf("�п�J��ܵ��G���ƶq==> \n");
    scanf_s("%d", &number);

    while (i <= number)
    {

        one = i;
        two = i * i;
        printf(" %d   %d \n", (one), (two));
        i++;

    }








}