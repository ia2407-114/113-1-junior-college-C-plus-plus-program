#include <stdio.h>

int main() {
    int n;  
    double pi = 0.0;  
    int i = 1;  
    int sign = 1;  

    printf("�п�J���ؼƶq: ");
    scanf_s("%d", &n);
    while (i <= 2 * n - 1) {
        pi += sign * (4.0 / i);
        sign = -sign; 
        i += 2; 
    }

    printf("�k ������Ȭ�: %.15f\n", pi);

    return 0;
}
