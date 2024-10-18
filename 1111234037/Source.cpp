#include <stdio.h>
int main()
{
	double pi = 0.0;
	int i = 1;
	int k = 1;
	while (i <= 20)
	{
		pi += k * 4.0 / (2 * i - 1);
		k = -k;
		i++;

	}
	printf("pi=: % f\n",pi);
	return 0;
}