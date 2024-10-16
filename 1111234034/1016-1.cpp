#include <stdio.h>
//題目1.請建立C程式，透過鍵盤輸入要顯示的結果的數量n，用while迴圈依序顯示1~n的數值與他的平方值，每一數值成一行，如下所示：
//1  1
//2  4
//3  9
int main() {
    int n, i = 1, i++;;
    printf("請輸入要顯示的數量 n: ");
    scanf_s("%d", &n);
    while (i <= n) {
        printf("%d%d\n", i, i * i);       
    }
    return 0;
}