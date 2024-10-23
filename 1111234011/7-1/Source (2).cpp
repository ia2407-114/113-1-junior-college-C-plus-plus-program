#include<stdio.h>

int main()
{
	int max;
	double ce = 1.0;
	int  j = 1;
	printf("請輸入一個整數\n");
	scanf_s("%d", &max);
	for (int i = 1;i<=max;i++)
	{
		j = j*i;
		ce =ce + (1.0/ j);
	}
	printf("%lf", ce);
}