#include <stdio.h>

void main(void)
{
	int times, count = 1;
	double pi = 4, base = 3;
	printf("請輸入計算圓周率的項數：\n");
	scanf_s("%d", &times);

	while (count <= times)
	{
		if (count != 1) {
			if (count % 2) {
				// 基數
				// printf("目前的值為%lf\t", pi);
				pi = pi + (4 / base);
				// printf("運算後的值為%lf\n", pi);
				base += 2;
			}
			else {
				// 偶數
				// printf("目前的值為%lf\t", pi);
				pi = pi - (4 / base);
				// printf("運算後的值為%lf\n", pi);
				base += 2;
			}
		}
		count++;
	}

	printf("計算結果為%lf\n", pi);
}