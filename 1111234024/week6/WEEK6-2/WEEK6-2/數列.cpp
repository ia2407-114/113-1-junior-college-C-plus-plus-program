/*請建立C程式，輸入項目數量，並利用while迴圈計算出以下數列:
pi=4-(4/3)+(4/5)-(4/7)+(4/9)-(4/11)+...
並且印出pi的結果。(項目數量愈多，精確度愈高)*/

#include <stdio.h>

int main()
{
    int n , i = 0;
    double pi = 0.0 , j = 1.0 ;

    printf("請輸入項目數量 n: ");
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
