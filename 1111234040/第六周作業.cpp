#include <stdio.h>

int main()
{
	int i, nn,n;
	int i = 1;
	int n = 0;
	int nn = 0;
	printf("輸入n的值\n");
	scanf_s("%d",&n);
	while (i<= n)
	{
	nn = i * i ;
	i = i + 1;
	}
	printf("%d\n",i);
	printf("          ");
	printf("%d\n", nn);
}