//題目1. 請建立C程式，透過鍵盤輸入要顯示的結果的數量n，用while迴圈依序顯示1~n的數值與他的平方值，每一數值成一行，如下所示：
//1  1
//2  4
//3  9
#include <stdio.h>

int main() {
    int n, i = 1;

    // 輸入要顯示的數量
    printf("請輸入要顯示的數量 n: ");
    scanf_s("%d", & n);

    // 使用 while 迴圈顯示 1 到 n 的數值及平方值
    while (i <= n) {
        printf("%d\t%d\n", i, i * i);
        i++;
    }

    return 0;
}

