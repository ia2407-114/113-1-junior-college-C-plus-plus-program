#include <stdio.h>

int main()
{
	int num;
	int square;
	int i = 1;
	printf("�п�J�@�ӭ�\n");
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