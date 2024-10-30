#include <stdio.h>

int power(int n, int k) {
    if (k == 0) {
        return 1; 
    }
    else {
        return n * power(n, k - 1); 
    }
}

int main() {
    int n, k;

    printf("請輸入平方值: ");
    scanf_s("%d", &n);
    printf("請輸入平方: ");
    scanf_s("%d", &k);

    int result = power(n, k);

    printf("%d 的 %d 次方是 %d\n", n, k, result);

    return 0;
}