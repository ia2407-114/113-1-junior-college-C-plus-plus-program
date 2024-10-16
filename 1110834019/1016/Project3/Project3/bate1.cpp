#include <stdio.h>

int main() {
    int n;  // 用來存放使用者輸入的項目數量
    double pi = 0.0;  // 用來存放計算出的 pi 值
    int i = 0;  // 用來計數
    double sign = 1.0;  // 用來改變符號

   
    printf("請輸入要計算的項目數量: ");
    scanf_s("%d", &n);

   
    while (i < n) {
        pi += sign * (4.0 / (2 * i + 1));  
        sign = -sign;  
        i++;  
    }

    
    printf("根據 %d 項計算出的 pi 值為: %.15f\n", n, pi);

    return 0;
}
