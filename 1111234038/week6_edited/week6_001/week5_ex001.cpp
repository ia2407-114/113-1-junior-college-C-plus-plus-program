#include <stdio.h>

void main(void)
{
	int num, count = 1;
	printf("�п�J�ƶqn�G\n");
	scanf_s("%d", &num);

	while (count <= num)
	{
		printf("%d\t%d\n", count, count * count);

		count++;
	}
}