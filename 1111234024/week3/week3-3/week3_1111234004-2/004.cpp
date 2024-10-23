/* 從鍵盤輸入值*/
#include<stdio.h>

int main()
{
	double cm, kg, bmi = 0.0; /*宣告變數和指定初值0.0*/

	printf("請輸入身高\n"); /*顯示提示字串*/
	scanf_s("%Lf", &cm); /*輸入身高*/
	printf("請輸入體重\n"); /*顯示提示字串*/
	scanf_s("%Lf", &kg); /*輸入體重*/


	printf("bmi= %f\n", kg / ((cm / 100) * (cm / 100)));

	if (bmi < 18.5)
	{
		printf("過輕");
	}
	else if (18.5<bmi<24)
	{
		printf("標準");
	}
	else if (24 <bmi <27)
	{
		printf("過重");
	}
	else if (bmi > 27)
	{
		printf("過重");
	}
}