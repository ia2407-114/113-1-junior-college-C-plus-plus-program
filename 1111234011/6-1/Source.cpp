#include<stdio.h>

int main()
{
	int i = 1;
	int max;
	int a;
	printf("請輸入整數\n");
	scanf_s("%d", &max);
	/*while (i <= max)
	{
		a = (i * i);
		printf("%d  %d\n",i,a);
		a = 0;
		i++;
	}*/
	for ( a = 0 ;i <= max; i++)
	{
		a = (i * i);
		printf("%d  %d\n", i, a);
	}
}