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

	printf("輸入n值====>  \n");
	scanf_s("%d", &x);
	printf("輸入k值====>  \n");
	scanf_s("%d", &y);

	total = so(x, y);

	printf("結果:  %d\n", total);

	return 0;
}