#include <stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	printf("請輸入要顯示的數量n:");
	if (scanf_s("%d", &n) != 1 , n< 1) {
		printf("輸入無效; 請輸入一個正整數 \n");
			return 1; 
	}
	while (i <=n )
	{
		printf("%d\t%d\n", i, i * i); 
		i++; 
	}
	return 0;
}