#include <stdio.h>

double exponen(int);
double const_e = 0.0;
int fact(int);

void main(void)
{
	int y = 1;
	printf("¿é¤J°_©l­È: \n");
	scanf_s("%d", &y);
	const_e += exponen(y);
	printf("%d", const_e);
}

double exponen(int z)
{
	int i = 1;
	double d = 1.0;
	for (i = 1;i < z;i++)
	{
		d += (1.0 / fact(i));
	}
	return d;
}

int fact(int x)
{
	int i = 1;
	int j = 1;
	for (i = 1;i < x;i++)
	{
		j *= i;
}
return j;
}