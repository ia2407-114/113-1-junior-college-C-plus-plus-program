#include <stdio.h>
int power(int n, int k);

void main()
{
	int n;
	int k;
	int p;
	printf("�п�JN����:\n");
	scanf_s("%d",&n);
	printf("�п�JK����:\n");
	scanf_s("%d", &k);

	p = power(n, k);
	printf("%d\n",p);
}

int power(int n,int k)
{
	if (k <= 0)
		return 1;
	else
		return n * power(n,k-1);
}