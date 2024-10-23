#include <stdio.h>


int main()
{
    int number, i = 1;
    int one = 0;
    int two = 0;
    printf("請輸入顯示結果的數量==> \n");
    scanf_s("%d", &number);

    while (i <= number)
    {

        one = i;
        two = i * i;
        printf(" %d   %d \n", (one), (two));
        i++;

    }








}