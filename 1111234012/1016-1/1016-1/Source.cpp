#include <stdio.h>

int main() 
{
    int i = 1, max;
    int sum = 0;

    printf("�п�J�n��ܪ��ƶq==> \n");
    scanf_s("%d", &max);

    while (i <= max) 
    {
        printf("%d ������O %d\n", i, i * i);
        i++;  
    }

    return 0;
}
