#include<stdio.h>

int main()
{
	int n , i , j = 1 ;
	double e = 1.0;
	printf("輸入 n 的值:");
	scanf_s("%d", &n);

	for (i = 1 ; i <= n ; i++)
	{
		j = j * i;
		e += 1.0 / j;
	}
	printf("e的值為:%lf", e);
	return 0;
}