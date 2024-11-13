#include <stdio.h>

void main(void)
{
	int num[5] = { 0 }, i;

	for (i = 0; i < 5; i++)
	{
		printf("請輸入第%d個數字: ", i + 1);
		scanf_s("%d", &num[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("index為%d的結果為:%d\n", i, num[i]);
	}
}