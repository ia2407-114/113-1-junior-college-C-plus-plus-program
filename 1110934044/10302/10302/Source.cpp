#include <stdio.h>
int power(int n, int k);
int main() {
    int n, k;
    printf("請輸入底數 n: ");
    scanf_s("%d", &n);
    printf("請輸入指數 k: ");
    scanf_s("%d", &k);
    int result = power(n, k);
    printf("%d 的 %d 次方是: %d\n", n, k, result);
    return 0;
}
int power(int n, int k) {
    if (k == 0) {
        return 1;
    }
    return n * power(n, k - 1);
}