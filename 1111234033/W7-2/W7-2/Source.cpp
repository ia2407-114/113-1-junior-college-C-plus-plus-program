#include <stdio.h>
int fact(int);
int res = 1;

void main(void)
{
	int x, i, result;
	printf("�п�J�B�ⶥ�h������:");
	scanf_s("%d", &x);

	result = fact(x);
	printf("%d���h���Ȭ�%d", x, result);
}

int fact(int x)
{
	int i;

	for (i = 1; i <= x; i++)
	{
		res *= i;
	}

	return res;
}