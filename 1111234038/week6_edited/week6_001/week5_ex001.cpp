#include <stdio.h>

void main(void)
{
	int num, count = 1;
	printf("請輸入數量n：\n");
	scanf_s("%d", &num);

	while (count <= num)
	{
		printf("%d\t%d\n", count, count * count);

		count++;
	}
}