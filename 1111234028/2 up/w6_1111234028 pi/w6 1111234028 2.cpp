#include <stdio.h>
int main()
{
	int i = 1;
	double n;
	double j = 3;
	double pi = 4;
	printf("輸入項目數量:\n");
	scanf_s("%f", &n);

	while (i <= n);
	{
		pi -= (4 / j);
		j = j + 2;
		pi += (4 / j);
		j = j + 2;
		i = i + 1;
	}
	printf("%lf", pi);
}