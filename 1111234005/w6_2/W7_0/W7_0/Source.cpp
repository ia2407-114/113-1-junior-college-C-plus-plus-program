#include <stdio.h>

int main() {
    int n, i;
    double e = 1.0, j= 1;

    
    printf("�п�Jn��: ");
    scanf_s("%d", &n);

    
    for (i = 1; i <= n; i++) {
        j *= i; 
        e += 1.0 / j;
    }

    printf("n���i�}�p�⵲�G��: %f\n", e);

    return 0;
}