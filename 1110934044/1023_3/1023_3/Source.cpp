#include <stdio.h>

int fact(int X) {
    int result = 1;
    for (int i = 1; i <= X; i++) {
        result *= i;
    }
    return result;
}


double exponen(int Z) {
    double sum = 1.0; 
    for (int i = 1; i <= Z; i++) {
        sum += 1.0 / fact(i);  
    }
    return sum;
}

int main() {
    int Z;
    printf("請輸入Z值項目數量: ");
    scanf_s("%d", &Z);
        printf("e的近似值為: %.10f\n", exponen(Z)); 
    return 0;
}
