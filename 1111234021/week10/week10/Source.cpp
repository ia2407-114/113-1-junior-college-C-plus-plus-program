#include <stdio.h>

int calculate(int origin_money, double rate);

void main(void)
{
	int money[11] = { 0 }, i;
	double rate;

	printf("�п�J����:");
	scanf_s("%d", &money[0]);

	printf("\n�п�J�~�Q�v:");
	scanf_s("%lf", &rate);

	for (i = 0; i < 10; i++)
	{
		money[i + 1] = calculate(money[i], rate);
	}

	for (i = 1; i < 11; i++)
	{
		printf("%d, ", money[i]);
	}
}

int calculate(int origin_money, double rate)
{
	int money = origin_money + origin_money * rate;
	return money;
}