#include <stdio.h>
double const_e = 0.0;
double exponen(int);
int fact(int);

void main(void)
{
	int y = 1;
	printf("½Ð¿é¤J¶¥¼h¼Æ\n");
	scanf_s("%d", &y);
	const_e += exponen(y);
	printf("%lf\n", const_e);
}

double exponen(int z)
{
	int i = 1;
	double b = 1.0;
	for (i = 1;i <= z;i++)
	{
		b += (1.0 / fact(i));
	}
	return b;
}

int fact(int x)
{
	int i = 1;
	int j = 1;
	for (i = 1; i <= x; i++)
	{
		j *= i;
	}
	return j;
}