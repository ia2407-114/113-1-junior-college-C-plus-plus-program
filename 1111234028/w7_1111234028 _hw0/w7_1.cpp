#include <stdio.h>
int main()
	{
	int n;
	double const_e = 1;

	printf("請輸入一個N的值:\n");
	scanf_s("%d", &n);

	double i=1;
	double j = 1;
	for (i = 1; i <= n; i++)
	{
		j = (j * i);
		const_e += (1 / j);
	}
	printf("計算結果:%lf\n", const_e);
	}
 