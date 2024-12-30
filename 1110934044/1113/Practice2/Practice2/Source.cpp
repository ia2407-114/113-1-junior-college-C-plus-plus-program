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

    printf("�п�J����: ");
    scanf_s("%lf", &principal);
    printf("�п�J�~�Q�v(�ʤ���): ");
    scanf_s("%lf", &rate);

    rate /= 100;

    calculateInterest(principal, rate, balance);

    printf("�C�~�����Q�M��:\n");
    for (int i = 0; i < YEARS; i++) {
        printf("�� %d �~: %.2f\n", i + 1, balance[i]);
    }

    return 0;
}
