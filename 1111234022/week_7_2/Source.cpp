#include<stdio.h>

int fact(int);

int main()
{
	int s , max;
	printf("請輸入一個整數\n");
	scanf_s("%d", &s);
	if (s == 0)
	{
		printf("1");
	}
	else
	{
		max = fact(s);
		printf("%d", max);
	}
}
int fact(int s)
{
	int c = 1;
	for (int i = 1; i <= s; i++)
	{
		c = c * i;

	}
	return c;
}


