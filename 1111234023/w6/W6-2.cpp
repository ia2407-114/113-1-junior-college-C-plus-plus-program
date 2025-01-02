#include <stdio.h>

int main()
{
	int i = 1;
	int n = 0;
	double pi = 4;
	double j = 3;
	
	printf("¿é¤Jn­È: \n");
	scanf_s("%d", &n);

	while (i <= n)
	{
		pi -= (4 / j);
		j =j+2;
		pi += (4 / j);
		j = j + 2;
		i = i + 1;
	}
	printf("%d", pi);
}