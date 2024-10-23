#include <stdio.h>

int main() {
    int n=0;
    int i = 1; 
    double pi = 0.0; 
    double j = 1.0; 

    printf("請輸入項目數量 n: ");

    if (scanf_s("%d", &n) != 1 , n < 1) {
        printf("輸入無效，請輸入一個正整數。\n");
        return 1; 
    }

   
    while (i <= n) {
        pi += j * (4.0 / (2 * i - 1)); 
        j = -j;
        i++; 
    }

    
    printf("pi 的近似值為: %.15f\n", pi);

    return 0; 
}

