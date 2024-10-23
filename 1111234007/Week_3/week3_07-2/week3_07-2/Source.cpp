#include<stdio.h>
int main()
{
	double h, kg, BMI = 0.0;
	printf("請輸入身高==>\n");
	scanf_s("%lf", &h);
	printf("請輸入體重==>\n");
	scanf_s("%lf", &kg);
	printf("BMI為:%f\n", kg / (h * h));


	if (kg / (h * h) < 18.5)
	{
		printf("過輕");
	}
	else if (kg / (h * h) > 24)
	{
		printf("過重");
	}
}