
#include <stdio.h>
#include <math.h>
int fact(int);
int res = 1;

double exponen(int);
double const_e = 1.0;

void main(void)
{
	int x, i, result;
	double res;
	printf("�п�Jx�����ƭ�:");
	scanf_s("%d", &x);

	res = exponen(x);

	printf("e���Ȭ�%lf", res);
}

// ���h
int fact(int x)
{
	int i;

	for (i = 1; i <= x; i++)
	{
		res *= i;
	}

	return res;
}


// e
double exponen(int x)
{
	int i;

	for (i = 1; i <= x; i++)
	{
		const_e += pow(x, i) / fact(i);
	}

	return const_e;
}
