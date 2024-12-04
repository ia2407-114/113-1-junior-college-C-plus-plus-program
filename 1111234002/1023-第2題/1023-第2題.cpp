// 1023-第2題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//題目2:請輸入Z值表示項目數量，利用題目1的fact(X)，
// 根據p.143的3.45(b)題，建立一個副程式exponen(Z)以for迴圈算出加總公式的值，
// 需傳入參數Z，傳回e的近似值，印出的近似e值為何?  


#include <stdio.h>

double ha(double z); // 函數原型

int main(void) {
    double z;
    printf("輸入 z 值: ");
    scanf_s("%lf", &z);
    printf("近似的 e 值為: %.10lf\n", ha(z));
    return 0;
}
//e = 1 + (1 / 1!) + (1 / 2!) + (1 / 3!) + ⋯
double ha(double z) {
    double e = 1.0;
    double j = 1.0;
    for (double i = 1; i <= z; i++) {
        j *= i; // 計算階乘
        e += 1.0 / j; // 累加 e 的近似值
    }
    return e;
}

