#include <stdio.h>

int main()
{
	double h, g, bmi = 0.0;
	printf("�п�J����(cm)==> \n");
	scanf_s("%lf", &h);
	printf("�п�J�魫(kg)==> \n");
	scanf_s("%lf", &g);
	bmi = g / ((h / 100) * (h / 100));
	printf("BMI��:%lf\n", bmi);
	
	if ((bmi < 18.5) && (bmi > 0))
	{
		printf("�魫�L��");
	}
	else if ((bmi >= 18.5) && (bmi <= 24))
	{
		printf("�魫�з�");
	}
	else if ((bmi >= 24) && (bmi <= 27))
	{
		printf("�魫�L�D");
	}
	else if ((bmi >= 27))
	{
		printf("�魫�L�D");
	}

	return 0;
}