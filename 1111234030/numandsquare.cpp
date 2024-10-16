#include <stdio.h>

int main()
{
	int num;
	int square;
	int i = 1;
	printf("請輸入一個值\n");
	scanf_s("%d", &num);
	while (i <= num)
	{
		printf("%d    ",i);
		square = i * i;
		printf("%d\n", square);
		i = i++;
	}



	return 0;
}