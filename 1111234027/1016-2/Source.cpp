#include <stdio.h>

int main() {
    int n, i = 1;
    double pi = 0.0;
    int sign = 1; 

  
    printf("�п�J���ؼƶq: ");
    scanf_s("%d", &n);

   
    while (i <= n) {
        pi += sign * (4.0 / ( 2 *  i  - 1  ));
        sign = -sign; 
        i++;
    }

   
    printf("Pi ������Ȭ�: %.15f\n", pi);

    return 0;
}