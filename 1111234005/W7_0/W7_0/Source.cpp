#include <stdio.h>

int main() {
    int n, i;
    double e = 1.0, j= 1;

    
    printf("請輸入n值: ");
    scanf_s("%d", &n);

    
    for (i = 1; i <= n; i++) {
        j *= i; 
        e += 1.0 / j;
    }

    printf("n項展開計算結果為: %f\n", e);

    return 0;
}