#include <stdio.h>

int main()
{
	double pi = 4;
	double i = 3;
	double b;
	double a = 1;
	printf("��J�@�Ӳ��I��\n");
	scanf_s("%lf", &b);
	while (a <= b)
	{
		pi -= 4 / i;
		i++;
		i++;
		pi += 4 / i;
		i++;
		i++;
		a++;
	}
	printf("%lf", pi);
	return 0;
}