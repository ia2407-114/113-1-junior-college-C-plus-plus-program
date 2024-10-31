#include<stdio.h>
#include<stdlib.h>

double e = 1.0;
double exp(int);
int main()
{	
	int z;
	printf("¿é¤J¾ã¼Æ\n");
	scanf_s("%d", &z);
	printf("%lf", exp(z));
}
double exp(int z)
{
	int j = 1;
	for (int i = 1; i <= z; i++)
	{
		j *= i;
		e += (1.0 / j);
	}
	return e;
}