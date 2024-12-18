#include <stdio.h>

int main()
{
	double h, g, bmi = 0.0;
	printf("請輸入身高(cm)==> \n");
	scanf_s("%lf", &h);
	printf("請輸入體重(kg)==> \n");
	scanf_s("%lf", &g);
	bmi = g / ((h / 100) * (h / 100));
	printf("BMI值:%lf\n", bmi);
	
	if ((bmi < 18.5) && (bmi > 0))
	{
		printf("體重過輕");
	}
	else if ((bmi >= 18.5) && (bmi <= 24))
	{
		printf("體重標準");
	}
	else if ((bmi >= 24) && (bmi <= 27))
	{
		printf("體重微胖");
	}
	else if ((bmi >= 27))
	{
		printf("體重過胖");
	}

	return 0;
}