#include <stdio.h>

int so (int n, int k);
{
	int total;

	total = n ^ k;

		return total;
}

int main();
{
	int x, y, total;

	printf("��Jn��====>  \n");
	scanf_s("%d", &x);
	printf("��Jk��====>  \n");
	scanf_s("%d", &y);

	total = so(x, y);

	printf("���G:  %d\n", total);

	return 0;
}