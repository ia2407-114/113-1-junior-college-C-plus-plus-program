#include <stdio.h>
#include <math.h>  


int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
double power(double base, int exp) {
    return pow(base, exp);  
}
double exponential(double x, int terms) {
    double sum = 1.0;
    for (int i = 1; i <= terms; i++) {
        sum += power(x, i) / fact(i);
    }
    return sum;
}
int main() {
    double x;
    int terms;

    printf("請輸入 x 的值: ");
    scanf("%lf", &x);
    printf("請輸入項目數量 (例如：10): ");
    scanf("%d", &terms);

    double ex = exponential(x, terms);
    printf("e^%.2f 的近似值為: %.10f\n", x, ex);
    return 0;
}
