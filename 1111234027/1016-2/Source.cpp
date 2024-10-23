#include <stdio.h>

int main() {
    int n, i = 1;
    double pi = 0.0;
    int sign = 1; 

  
    printf("請輸入項目數量: ");
    scanf_s("%d", &n);

   
    while (i <= n) {
        pi += sign * (4.0 / ( 2 *  i  - 1  ));
        sign = -sign; 
        i++;
    }

   
    printf("Pi 的近似值為: %.15f\n", pi);

    return 0;
}