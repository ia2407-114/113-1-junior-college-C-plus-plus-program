#include <stdio.h>

int main(void)
{
	printf("�п�J5�ӭ�:\n");
	int j[5];
	int i = 0;
	for (i = 0; i <= 4; i++)
		scanf_s("%d", &j[i]);

	printf("\n");

	for (i = 0; i <= 4; i++)
		printf("�� % d��: % d\n", i+1,j[i]);

}