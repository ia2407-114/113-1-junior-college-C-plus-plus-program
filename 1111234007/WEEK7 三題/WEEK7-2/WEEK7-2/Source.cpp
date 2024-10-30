//題目1:請輸入一個X值，建立一個副程式fact(X)以for迴圈算出階乘值，需傳入參數X，並傳回X!的結果。由主程式印出X的階乘X!
//階乘: X = 5階乘 = 1 * 2 * 3 * 4 * 5 = 120，0階乘 = 1(定義)

#include <stdio.h>


int fact(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result; 
}

int main() {
    int x;
    printf("請輸入一個整數X：");
    scanf_s("%d", &x);

    
    printf("%d的階乘 = %d\n", x, fact(x));

    return 0;
}