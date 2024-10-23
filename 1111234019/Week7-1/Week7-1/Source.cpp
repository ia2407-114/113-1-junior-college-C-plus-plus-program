#include<stdio.h>
int main()
{
	double const_e = 1.0, j = 1.0;
	int n=0,i ;

	printf("請輸入N的次數\n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		j *= i;
		const_e += 1.0 / j;
	}
	printf("計算結果:%lf\n", const_e);
	return 0;
}
