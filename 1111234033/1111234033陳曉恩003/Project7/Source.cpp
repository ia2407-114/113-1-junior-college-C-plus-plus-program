#include <stdio.h>
#include <math.h>
int fact(int);
int res = 1;

double exponen(int, int);
double const_e = 1.0;

void main(void)
{
	int z, x, i, result;
	double res;
	printf("請輸入z的項數值:");
	scanf_s("%d", &z);
	printf("請輸入x的值:");
	scanf_s("%d", &x);

	res = exponen(x, z);

	printf("e的值為%lf", res);
}


int fact(int num)
{
	int i;

	for (i = 1; i <= num; i++)
	{
		res *= i;
	}

	return res;
}



double exponen(int x, int z)
{
	int i;

	for (i = 1; i <= z; i++)
	{
		const_e += pow(x, i) / fact(i);
	}

	return const_e;
}