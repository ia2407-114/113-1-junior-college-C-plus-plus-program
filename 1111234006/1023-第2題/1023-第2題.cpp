// 1023-第2題(恩).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
#include <stdio.h>
double exponen(int);
double const_e = 1.0;

void main(void)
{
	int n;
	double res;

	printf("請輸入的項數值:");
	scanf_s("%d", &n);
	res = exponen(n);
	printf("e的值為:%If" , res);
}
double exponen(int n)
{
	int i;
	double j = 1.0;

	for (i = 1; i < n; i++)
	{
		j *= i;
		const_e + 1 / j;
	}
	return const_e;
}
	