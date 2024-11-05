// 1023-第3題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <stdio.h>
double ee(int n); 
int main(void) {
    int n;
    printf("輸入 n 值: ");
    scanf_s("%d", &n); 
    printf("%lf\n", ee(n));
}
double ee(int n) {
    double e = 1.0; 
    double j = 1.0; 
    for (int i = 1; i <= n; i++) {
        j *= i; 
        e += 1.0 / j; 
    }
    return e; 
}


