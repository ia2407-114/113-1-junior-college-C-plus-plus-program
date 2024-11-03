#include <stdio.h>

int main() {
    int n;
    printf("請輸入項數 n: ");
    scanf_s("%d", &n);

    double x = 1.0;  
    double factorial = 1.0;  

    for (int i = 1; i <= n; i++) {
        factorial *= i;  
        x += (1.0 / factorial);  
    }


    printf("e 的近似值是: %lf\n",x);

    return 0;
}
