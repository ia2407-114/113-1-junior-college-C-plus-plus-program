#include <stdio.h>

int main()
{
	int n;
	double const_e = 1;

		printf("¿é¤Jn­È: \n");
	scanf_s("%d", &n);

	double i = 1;
	double j = 1;

	for (i = 1; i <= n;i++)
	{
		j = (j * i);
		const_e += (1 / j);
	}
	printf("µ²ªG: %f\n", const_e);
}