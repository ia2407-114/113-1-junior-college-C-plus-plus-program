#include <stdio.h>

int main()
{
	int l, h;
	double x, y, z, i;
	printf("輸入半徑:");
	scanf_s("%d", &l);
	printf("輸入高度:");
	scanf_s("%d", &h);

	x = l * 2 * 3.14;
	y = l * l * 3.14;
	z = l * l * 3.14 * h;
	i = (l * l * 3.14 * h) / 3;

	printf("圓周長 = %lf\n圓面積 = %lf\n圓柱體體積 = %lf\n圓錐體體積 = %lf\n", x, y, z, i);
}