#include <stdio.h>
int PAI(int, double);


int main(void)
{
	int banjin = 0;
	double namelelru = 0.0;
	double banre[10] = { 0.0 };
	printf("請輸入本金:\n");
	scanf_s("%d", &banjin);
	printf("請輸入年利率(ex;0.01):\n");
	scanf_s("%lf", &namelelru);

	banre[0] = banjin;

	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		banre[i] = PAI(banre[i], namelelru);
		printf("第%d年的本利和:%5lf\n", i + 1, banre[i]);
		banre[i + 1] = banre[i];
	}

}

int PAI(int x, double y)
{
	double banre = 0.0;
	banre = (x * y) + x;

	return banre;
}