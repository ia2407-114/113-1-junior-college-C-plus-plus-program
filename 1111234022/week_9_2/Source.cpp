#include<stdio.h>

int play(int k);
int n;

int main ()
{
	int  k;

	printf("��J���\n");
	scanf_s("%d", &n);

	printf("��J����\n");
	scanf_s("%d", &k);
	
	printf("%d", play(k));
}
int play(int k)
{	
	if (k == 0)
	return 1;
	return n * play(k-1);
}