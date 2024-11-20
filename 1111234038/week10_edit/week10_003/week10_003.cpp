#include <stdio.h>
#include <stdlib.h>

int die(void);

void main(void)
{
	int freq[13] = { 0 }, i, j, times;
	
	printf("請輸入擲骰子次數:");
	scanf_s("%d", &times);

	for (i = 1; i <= times; i++)
	{
		freq[die()]++;
	}

	printf("%s%13s\n", "總點數", "頻率");
	for (i = 2; i <= 12; i++)
	{
		printf("%7d%13d ", i, freq[i]);
		int k = freq[i] / (times / 100);

		for (j = 0; j < k; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int die(void)
{
	int num1, num2, total;
	num1 = 1 + rand() % 6;
	num2 = 1 + rand() % 6;

	total = num1 + num2;

	return total;
}