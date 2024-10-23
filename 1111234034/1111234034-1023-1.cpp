#include <stdio.h>

//題目0: (主程式)請輸入一個X值與n值，以for迴圈算出階乘值，並根據以下公式計算出n項展開的計算結果，並印出結果。
//e = 1 + (1 / 1!) + (1 / 2!) + (1 / 3!) + ⋯
int main() {
	double e = 1.0;
	double j = 1;
	int i, n;
	scanf_s("%d", &n);
		for (i = 1; i <= n; i++) {
			j *= i;
			e += 1 / j;
		}
	printf("%lf", e);
		return 0;
}