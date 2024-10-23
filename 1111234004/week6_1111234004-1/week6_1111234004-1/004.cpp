#include<stdio.h>
int main()
{
	int n, i = 1; /*輸入顯示數量*/
	printf("請輸入要顯示的結果 n:\n");
	scanf_s("%d", &n);

	while (i <= n) {
		printf("%d\t%d\n", i, i * i);
		i++;
	}
	return 0;
}
