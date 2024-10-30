#include<stdio.h>

int main()
{

	double e = 1.0, j = 1.0;
	int n;
	printf("輸入一個值");

	scanf_s("%d", &n);


	for (int i = 1; i <= n; i++)
	{
		j *= i;
		e += 1 / j;
	}
	printf("結果為%1f\n", e);
	return 0;
}