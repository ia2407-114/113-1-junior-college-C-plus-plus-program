#include <stdio.h>
int sum(int a, double b);
void main(void)
{
	int aa[11] = { 0 }, i;
	double bb;

	printf("�п�J����:");
	scanf_s("%d", &aa[0]);

	printf("\n�п�J�~�Q�v:");
	scanf_s("%lf", &bb);

	for (i = 0; i < 10; i++)
	{
		aa[i + 1] = sum(aa[i], bb);
	}

	for (i = 1; i < 11; i++)
	{
		printf("��%d�~���Q�M:%d\n",i, aa[i]);
	}
}
int sum(int a, double b)
{
	int money =  a * b + a;
	return money;
}