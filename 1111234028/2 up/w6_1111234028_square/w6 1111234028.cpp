#include <stdio.h>

int main()
{
	int n = 0;
	int i = 1;
	int nn = 0;
	printf("請輸入結果的數量:\n");
	scanf_s("%d", &n);
	while (i <= n)
	{
		printf("%d", i);
		nn = (i * i);
		i = i + 1;
		printf("	");
		printf("%d\n", nn);
	}

};


