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

    printf("�п�J x ����: ");
    scanf("%lf", &x);
    printf("�п�J���ؼƶq (�Ҧp�G10): ");
    scanf("%d", &terms);

    double ex = exponential(x, terms);
    printf("e^%.2f ������Ȭ�: %.10f\n", x, ex);
    return 0;
}
