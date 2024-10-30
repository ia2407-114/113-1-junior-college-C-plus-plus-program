#include <stdio.h>
#define PI 3.1415

int main(void)
{
	int r, h;
	printf("請輸入半徑和高的值==>\n");
	scanf_s("%d %d", &r, &h);

	printf("圓周長的值是:%lf\n", r * 2 * PI);
	printf("圓面積的值是:%lf\n", r * r * PI);
	printf("圓柱體體積的值是:%lf\n", r * r * PI * h);
	printf("圓錐體體積的值是:%lf\n", r * r * PI * h / 3);

	return 0;
}