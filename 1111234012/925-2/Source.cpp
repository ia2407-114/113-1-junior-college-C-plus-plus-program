#include <stdio.h>
#define PI 3.1415926

int main()
{
	double r,h = 0.0;

	printf("�п�J�b�|==> \n");
	scanf_s("%lf", &r);
	printf("�п�J����==> \n");
	scanf_s("%lf", &h);

	printf("��P��: %lf\n", r * 2 * PI);
	printf("�ꭱ�n: %lf\n", r * r * PI);
	printf("��W����n: %lf\n", r * r * h * PI);
	printf("���@����n: %lf\n", r * r * h * 1 / 3 * PI);
	

	return 0;
}