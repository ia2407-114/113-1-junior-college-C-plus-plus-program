// 1023-第1題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//題目1:請輸入一個X值，建立一個副程式fact(X)以for迴圈算出階乘值，需傳入參數X，並傳回X!的結果。由主程式印出X的階乘X!
//階乘: X = 5階乘 = 1 * 2 * 3 * 4 * 5 = 120，0階乘 = 1(定義)
#include<stdio.h>
int xj (int x);
int main(void) {
	int x;
	printf("輸入一個x值");
	scanf_s("%d", &x);
	printf("%d的階乘：%d", x, xj(x));
}
int xj(int x) {
	int xx=1 ;
	for (int i = 1; i <= x; i++) {
		xx *= i;
	}
	return xx;
}

