#include <stdio.h>

// 題目0
int fact(int x);

int main() {
    int x, n;

    printf("請輸入X 值與n值：\n");
    scanf_s("%d %d", &x, &n);

    double result = 1.0; 

    for (int i = 1; i <= n; i++) {
        result += 1.0 / fact(i);  
    }

    printf("展開式計算結果：%lf\n", result);

    return 0;
}

int fact(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;  
    }
    return result;
}
