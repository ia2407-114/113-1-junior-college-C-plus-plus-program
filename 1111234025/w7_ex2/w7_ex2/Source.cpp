#include <stdio.h>
int fact(int);
int res = 1;

void main(void)
{
	int x, i, result;
	printf("請輸入運算階層的項數:");
	scanf_s("%d", &x);

	result = fact(x);
	printf("%d階層的值為%d", x, result);
}

int fact(int x)
{
	int i;

	for (i = 1; i <= x; i++)
	{
		res *= i;
	}

	return res;
}