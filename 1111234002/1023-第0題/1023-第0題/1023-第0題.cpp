// 1023-第0題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//題目0: (主程式)請輸入一個X值與n值，以for迴圈算出階乘值，並根據以下公式計算出n項展開的計算結果，並印出結果。
//e = 1 + (1 / 1!) + (1 / 2!) + (1 / 3!) + ⋯
#include<stdio.h>
int main(void) {
	double e = 1.0;
	double j=1;
	int n;
	printf("輸入n值");
	scanf_s("%d", &n);
	for (double i = 1; i <= n; i++) {
		j *= i;
		e += 1.0 / j;
	}
	printf("%lf", e);
}


