#include <stdio.h>

void main(void)
{
	int times, count = 1;
	double pi = 4, base = 3;
	printf("�п�J�p���P�v�����ơG\n");
	scanf_s("%d", &times);

	while (count <= times)
	{
		if (count != 1) {
			if (count % 2) {
				// ���
				// printf("�ثe���Ȭ�%lf\t", pi);
				pi = pi + (4 / base);
				// printf("�B��᪺�Ȭ�%lf\n", pi);
				base += 2;
			}
			else {
				// ����
				// printf("�ثe���Ȭ�%lf\t", pi);
				pi = pi - (4 / base);
				// printf("�B��᪺�Ȭ�%lf\n", pi);
				base += 2;
			}
		}
		count++;
	}

	printf("�p�⵲�G��%lf\n", pi);
}