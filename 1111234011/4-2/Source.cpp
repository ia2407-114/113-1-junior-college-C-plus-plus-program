#include <stdio.h>

int main()
{
	double l, w, BMI;
	printf("輸入身高(公分):");
	scanf_s("%lf", &l);
	printf("輸入體重(公斤):");
	scanf_s("%lf", &w);
	l = l / 100;
	BMI = w / (l * l);
	printf("BMI為%lf\n", BMI);

	if (BMI < 18.5)
	{
		printf("過輕");
	}
	else
	{
		if (BMI < 24)
		{
			printf("標準");
		}
		else
		{
			if (BMI < 27)
			{
				printf("過重");
			}
			else
			{
				printf("肥胖");
			}
		}
	}
}