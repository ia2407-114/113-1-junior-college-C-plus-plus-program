#include <stdio.h>

int main(void)
{
	printf("請輸入5個值:\n");
	int j[5];
	int i = 0;
	for (i = 0; i <= 4; i++)
		scanf_s("%d", &j[i]);

	printf("\n");

	for (i = 0; i <= 4; i++)
		printf("第 % d為: % d\n", i+1,j[i]);

}