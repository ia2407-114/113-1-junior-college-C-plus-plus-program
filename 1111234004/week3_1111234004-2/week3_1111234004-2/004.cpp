/* �q��L��J��*/
#include<stdio.h>

int main()
{
	double cm, kg, bmi = 0.0; /*�ŧi�ܼƩM���w���0.0*/

	printf("�п�J����\n"); /*��ܴ��ܦr��*/
	scanf_s("%Lf", &cm); /*��J����*/
	printf("�п�J�魫\n"); /*��ܴ��ܦr��*/
	scanf_s("%Lf", &kg); /*��J�魫*/


	printf("bmi= %f\n", kg / ((cm / 100) * (cm / 100)));

	if (bmi < 18.5)
	{
		printf("�L��");
	}
	else if (18.5<bmi<24)
	{
		printf("�з�");
	}
	else if (24 <bmi <27)
	{
		printf("�L��");
	}
	else if (bmi > 27)
	{
		printf("�L��");
	}
}