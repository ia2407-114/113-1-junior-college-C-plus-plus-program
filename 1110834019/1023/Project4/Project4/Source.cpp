#include <stdio.h>
#include <math.h>  


int fact(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result;
}


double power(double x, int i) {
    return pow(x, i);
}

int main() {
    int n;
    double x, ex = 1.0;  

    
    printf("請輸入x值: ");
    scanf_s("%lf", &x);

    printf("請輸入展開項數n: ");
    scanf_s("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        ex += power(x, i) / fact(i); 
    }

    
    printf("e^%.2lf 展開至第%d項的值為: %.10lf\n", x, n, ex);

    return 0;
}
