#include <stdio.h>
int power(int n, int k);

void main(power)
{
	int n;
	int k;
	int p;
	printf("?D?e?JNao-E:\n");
	scanf_s("%d",&n);
	printf("?D?e?JKao-E:\n");
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
