#include <stdio.h>
int main()
{
	int i,n;
		double const_e = 1.0, j = 1.0;
		printf("請輸入項目數量==> \n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		j *= i;
		const_e += (1 / j);
	}
	printf("計算結果:%lf\n", const_e);
	return 0;
}
