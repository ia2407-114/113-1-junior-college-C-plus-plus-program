#include <stdio.h>
#define PI 3.1415926

int main()
{
	double r,h = 0.0;

	printf("請輸入半徑==> \n");
	scanf_s("%lf", &r);
	printf("請輸入高度==> \n");
	scanf_s("%lf", &h);

	printf("圓周長: %lf\n", r * 2 * PI);
	printf("圓面積: %lf\n", r * r * PI);
	printf("圓柱體體積: %lf\n", r * r * h * PI);
	printf("圓錐體體積: %lf\n", r * r * h * 1 / 3 * PI);
	

	return 0;
}