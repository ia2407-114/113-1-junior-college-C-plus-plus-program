#include<stdio.h>
int main()
{
	double h, kg, BMI = 0.0;
	printf("�п�J����==>\n");
	scanf_s("%lf", &h);
	printf("�п�J�魫==>\n");
	scanf_s("%lf", &kg);
	printf("BMI��:%f\n", kg / (h * h));


	if (kg / (h * h) < 18.5)
	{
		printf("�L��");
	}
	else if (kg / (h * h) > 24)
	{
		printf("�L��");
	}
}