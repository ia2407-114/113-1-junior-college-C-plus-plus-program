#include<stdio.h>
int main()
{
	double const_e = 1.0, j = 1.0;
	int n=0,i ;

	printf("�п�JN������\n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		j *= i;
		const_e += 1.0 / j;
	}
	printf("�p�⵲�G:%lf\n", const_e);
	return 0;
}
