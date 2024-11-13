#include <stdio.h>
int sum(int a, double b);
void main(void)
{
	int aa[11] = { 0 }, i;
	double bb;

	printf("請輸入本金:");
	scanf_s("%d", &aa[0]);

	printf("\n請輸入年利率:");
	scanf_s("%lf", &bb);

	for (i = 0; i < 10; i++)
	{
		aa[i + 1] = sum(aa[i], bb);
	}

	for (i = 1; i < 11; i++)
	{
		printf("第%d年本利和:%d\n",i, aa[i]);
	}
}
int sum(int a, double b)
{
	int money =  a * b + a;
	return money;
}