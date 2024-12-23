#include <stdio.h>
int main()
{
	int n = 1;
	int a = 1;

	printf("½Ð¿é¤J³Ì¤j­È==> \n");
	scanf_s("%d", &n);
	while (a <= n)
	{
		printf("%d\t%d\n", a, a * a);
		a++;
	}
	return 0;
}