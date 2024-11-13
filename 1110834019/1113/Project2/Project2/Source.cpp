#include <stdio.h>
#include <math.h>

#define YEARS 10  


void calculateCompoundInterest(double principal, double rate, double balance[]) {
    for (int year = 1; year <= YEARS; year++) {
        balance[year - 1] = principal * pow((1 + rate), year); 
    }
}

int main() {
    double principal, rate;
    double balance[YEARS];

   
    printf("�п�J����: ");
    scanf_s("%lf", &principal);
    printf("�п�J�~�Q�v(�ʤ���): ");
    scanf_s("%lf", &rate);

    
    rate = rate / 100.0;

    
    calculateCompoundInterest(principal, rate, balance);

   
    printf("�C�~���Q�M�p�U:\n");
    for (int i = 0; i < YEARS; i++) {
        printf("�� %d �~: %.2f\n", i + 1, balance[i]);
    }

    return 0;
}
