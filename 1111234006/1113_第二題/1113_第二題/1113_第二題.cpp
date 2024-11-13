// 1113_第二題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//題目2.寫一個程式，輸入實驗次數ex，骰子的數量2，建立一個副程式，傳回擲骰子後的總點數。最後由主程式的陣列統計出各點出現的次數。

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