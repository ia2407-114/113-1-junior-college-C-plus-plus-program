#include <stdio.h>
double exponen(int);
double const_e = 1.0;

void main(void)
{
	int n;
	double res;

	printf("�п�Jn�����ƭ�:");
	scanf_s("%d", &n);

	res = exponen(n);


	printf("e���Ȭ�:%lf", res);
}

double exponen(int n)
{
	int i;
	double j = 1.0;

	for (i = 1; i <= n; i++)
	{
		j *= i;
		const_e += 1 / j;
	}

	return const_e;
}
