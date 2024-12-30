#include <stdio.h>

#define YEARS 10
void calculateInterest(double principal, double rate, double balance[]);
void calculateInterest(double principal, double rate, double balance[]) {
    for (int i = 0; i < YEARS; i++) {
        principal += principal * rate;
        balance[i] = principal;
    }
}

int main() {
    double principal, rate;
    double balance[YEARS];

    printf("請輸入本金: ");
    scanf_s("%lf", &principal);
    printf("請輸入年利率(百分比): ");
    scanf_s("%lf", &rate);

    rate /= 100;

    calculateInterest(principal, rate, balance);

    printf("每年的本利和為:\n");
    for (int i = 0; i < YEARS; i++) {
        printf("第 %d 年: %.2f\n", i + 1, balance[i]);
    }

    return 0;
}
