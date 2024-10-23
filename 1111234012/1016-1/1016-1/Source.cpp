#include <stdio.h>

int main() 
{
    int i = 1, max;
    int sum = 0;

    printf("請輸入要顯示的數量==> \n");
    scanf_s("%d", &max);

    while (i <= max) 
    {
        printf("%d 的平方是 %d\n", i, i * i);
        i++;  
    }

    return 0;
}
