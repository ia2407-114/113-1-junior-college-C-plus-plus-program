#include <stdio.h>
#define PI 3.1415

int main(void)
{
	int r, h;
	printf("�п�J�b�|�M������==>\n");
	scanf_s("%d %d", &r, &h);

	printf("��P�����ȬO:%lf\n", r * 2 * PI);
	printf("�ꭱ�n���ȬO:%lf\n", r * r * PI);
	printf("��W����n���ȬO:%lf\n", r * r * PI * h);
	printf("���@����n���ȬO:%lf\n", r * r * PI * h / 3);

	return 0;
}