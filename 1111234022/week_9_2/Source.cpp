#include<stdio.h>

int play(int k);
int n;

int main ()
{
	int  k;

	printf("輸入基數\n");
	scanf_s("%d", &n);

	printf("輸入指數\n");
	scanf_s("%d", &k);
	
	printf("%d", play(k));
}
int play(int k)
{	
	if (k == 0)
	return 1;
	return n * play(k-1);
}