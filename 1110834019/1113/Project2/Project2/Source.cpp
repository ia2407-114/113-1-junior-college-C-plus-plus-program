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

   
    printf("請輸入本金: ");
    scanf_s("%lf", &principal);
    printf("請輸入年利率(百分比): ");
    scanf_s("%lf", &rate);

    
    rate = rate / 100.0;

    
    calculateCompoundInterest(principal, rate, balance);

   
    printf("每年本利和如下:\n");
    for (int i = 0; i < YEARS; i++) {
        printf("第 %d 年: %.2f\n", i + 1, balance[i]);
    }

    return 0;
}
