#include <stdio.h>

double exponen(int z);

int main()
{
	int z;
	printf("輸入項目數量:");
	scanf_s("%d", &z);

	printf("%lf", exponen(z));
}
double exponen(int z)
{
	int x, y = 1;
	double e = 1.0;
	for (x = 1; x <= z; x++)
	{
		y *= x;
		e += 1.0 / y;
	}
	return e;
}