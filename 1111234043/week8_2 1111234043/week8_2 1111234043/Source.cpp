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

    printf("�п�J�����: ");
    scanf_s("%d", &n);
    printf("�п�J����: ");
    scanf_s("%d", &k);

    int result = power(n, k);

    printf("%d �� %d ����O %d\n", n, k, result);

    return 0;
}