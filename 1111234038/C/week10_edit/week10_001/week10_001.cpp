#include <stdio.h>

void main(void)
{
	int num[5] = { 0 }, i;

	for (i = 0; i < 5; i++)
	{
		printf("�п�J��%d�ӼƦr: ", i + 1);
		scanf_s("%d", &num[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("index��%d�����G��:%d\n", i, num[i]);
	}
}