#include<stdio.h>
using namespace std;
int fact(int x);
double exponen(int z);
int main()
{

	int z = 0;

	printf("請輸入慾顯示項目數量:\n");
	scanf_s("%d", &z);
	int result = fact(z);
	printf("%d 的近似值是: %f\n", z, exponen(z));

	return 0;
}

int fact(int x)
{
	int i;
	int sum = 1;
	for (i = 1; i <= x; i++)
	{
		sum *= i;
	}
	return sum;
}

double exponen(int z)
{
	double k = 1.0;
		for (int i = 1; i <= z; i++)
		{
			k += 1.0 / fact(i);
		}
		return k;
}



