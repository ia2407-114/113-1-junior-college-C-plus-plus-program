#include<stdio.h>
int main()
{
	int n, i = 0;
	double pi = 0.0,j=1.0;
    printf("�п�J���ؼƶq:\n");
	scanf_s("%d", &n);

	while (i <= n) {

		if (i % 2)

		{
			pi += (4.0 / j);
		}
		else
		{
			pi -= (4.0 / j);

		}
		j += 2;
		i++;
	}
	printf(" % lf", pi * -1);
	}