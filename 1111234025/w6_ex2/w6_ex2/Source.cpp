#include <stdio.h>
int main()
{
	int num = 1;
	int a = 1;
	double b = 1;
	double pi = 0;

	printf("請輸入項目數量==> \n");
	scanf_s("%d", &num);
	while (a <= num)
	{
		if (a % 2 == 0)
		{
			// 偶數
			pi -= 4 / (b);
		}
		else {
			// 基數
			pi += 4 / (b);
		}
		b += 2;
		a++;

	}
	printf("計算結果:%lf\n", pi);
	return 0;
}