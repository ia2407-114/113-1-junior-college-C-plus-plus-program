#include <stdio.h>
int power(int n, int k);
int main() {
    int n, k;
    printf("�п�J���� n: ");
    scanf_s("%d", &n);
    printf("�п�J���� k: ");
    scanf_s("%d", &k);
    int result = power(n, k);
    printf("%d �� %d ����O: %d\n", n, k, result);
    return 0;
}
int power(int n, int k) {
    if (k == 0) {
        return 1;
    }
    return n * power(n, k - 1);
}