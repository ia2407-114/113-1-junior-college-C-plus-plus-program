#include <stdio.h>
int main()
{
	int num = 1;
	int a = 1;
	double b = 1;
	double pi = 0;

	printf("�п�J���ؼƶq==> \n");
	scanf_s("%d", &num);
	while (a <= num)
	{
		if (a % 2 == 0)
		{
			// ����
			pi -= 4 / (b);
		}
		else {
			// ���
			pi += 4 / (b);
		}
		b += 2;
		a++;

	}
	printf("�p�⵲�G:%lf\n", pi);
	return 0;
}