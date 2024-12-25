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
	printf("BMI值為%lf\n", BMI);

	if (w >= 90)
	{
		puts("A");
	}
	else
	{
		if (w >= 80)
		{
			puts("B");
		}
		else
		{
			if (w >= 70)
			{
				puts("C");
			}
			else
			{
				if (w >= 60)
				{
					puts("D");
				}
				else
				{
					puts("F");
				}
			}
		}
	}
}