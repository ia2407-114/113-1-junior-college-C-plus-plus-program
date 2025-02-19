#include <stdio.h>

void main(void)
{
	int n, i;
	double const_e = 1.0, j = 1.0;
	printf("請輸入n的項數值:");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		j *= i;
		const_e += 1 / j;
	}
	printf("e的值為:%lf", const_e);
}