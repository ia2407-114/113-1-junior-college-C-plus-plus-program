#include <stdio.h>

long long power(int n, int k); 

int main(void) {
    int n, k;

    printf("輸入 n: ");
    scanf_s("%d", &n);

    printf("輸入指數 k: ");
    scanf_s("%d", &k);

   
    long long result = power(n, k);

    printf("%d 的 %d 次方為: %lld\n", n, k, result);
}

long long power(int n, int k) {
    if (k == 0) {
        return 1;
    }
    else {
        return n * power(n, k - 1);
    }
}
