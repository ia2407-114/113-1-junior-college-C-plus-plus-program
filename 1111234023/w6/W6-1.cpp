#include <stdio.h>

int main()
{
	int i = 1;
	int n = 0;
	int so = 0;
	printf("¿é¤Jn­È:\n");
	scanf_s("%d", &n);

	while (i <= n)
	{
		printf("%d", i);
		so = (i * i);
		i = i + 1;
		printf("	");
		printf("%d\n", so);
	}

}