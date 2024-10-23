#include <stdio.h>


int fact(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result; 
}

int main() {
    int x;
    printf("請輸入一個整數X：");
    scanf_s("%d", &x);

    
    printf("%d的階乘 = %d\n", x, fact(x));

    return 0;
}