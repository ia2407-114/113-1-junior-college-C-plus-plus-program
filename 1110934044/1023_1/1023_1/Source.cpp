#include <stdio.h>

int main() {
    int n;
    printf("�п�J���� n: ");
    scanf_s("%d", &n);

    double x = 1.0;  
    double factorial = 1.0;  

    for (int i = 1; i <= n; i++) {
        factorial *= i;  
        x += (1.0 / factorial);  
    }


    printf("e ������ȬO: %lf\n",x);

    return 0;
}
