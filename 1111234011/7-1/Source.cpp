#include<stdio.h>

int main()
{
	int n , i , j = 1 ;
	double e = 1.0;
	printf("��J n ����:");
	scanf_s("%d", &n);

	for (i = 1 ; i <= n ; i++)
	{
		j = j * i;
		e += 1.0 / j;
	}
	printf("e���Ȭ�:%lf", e);
	return 0;
}