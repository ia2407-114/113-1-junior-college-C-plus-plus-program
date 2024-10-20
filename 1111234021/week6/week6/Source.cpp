#include <stdio.h>
int main()
{
	int n = 1;
	int a = 1;

	printf("請輸入最大值==> \n");
	scanf_s("%d", &n);
	while (a <= n)
	{
		printf("%d\t%d\n", a, a * a);
		a++;
	}
	return 0;
}