/*請建立C程式，透過鍵盤輸入要顯示的結果的數量n，用while迴圈依序顯示1~n的數值與他的平方值，每一數值成一行*/
#include<stdio.h>

int main()
{
	int n , i = 1;
	printf("請輸入要顯示的數量 n:");
	scanf_s("%d", &n );

	while ( i <= n )
	{
		printf("%d\t%d\n", i, i * i);
		i++;
	}
	return 0;
}