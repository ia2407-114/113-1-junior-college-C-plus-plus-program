#include <stdio.h>

// 題目三
int fact(int x);
double pow(int x, int i);
double exp_x(int x, int n);

int main() {
    int x, n;

    printf("請輸入 X 和 n：\n");
    scanf_s("%d %d", &x, &n);

    printf("e^%d 的近似值是：%lf\n", x, exp_x(x, n));

    return 0;
}

int fact(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;  
    }
    return result;
}

double pow(int x, int i) {
    double result = 1.0;
    for (int j = 1; j <= i; j++) {
        result *= x;  
    }
    return result;
}

double exp_x(int x, int n) {
    double result = 1.0;

    for (int i = 1; i <= n; i++) {
        result += pow(x, i) / fact(i);  
    }

    return result;
}
