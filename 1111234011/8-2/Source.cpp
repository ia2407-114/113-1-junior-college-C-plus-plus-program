#include <stdio.h>

int power(int x, int y);

int main()
{
	int n, k, sum;
	printf("輸入n的值:");
	scanf_s("%d", &n);
	printf("輸入k的值:");
	scanf_s("%d", &k);
	sum = power(n, k);

	printf("%d^%d = %d\n", n, k, sum);
}
int power(int x, int y)
{
	int i, z = 1;
	if (y == 0)
	{
		return 1;
	}
	else
	{
		return x * power(x, y - 1);
		/*
		for (i = 1; i <= y; i++)
			z *= x;
		return z;
		*/

	}

}