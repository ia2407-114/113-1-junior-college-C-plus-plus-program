#include <stdio.h>
int power(int n, int k);


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

    printf("�п�J���� n�G");
    scanf_s("%d", &n);
    printf("�п�J���� k�G");
    scanf_s("%d", &k);

    int result = power(n, k);
    printf("%d �� %d ���赲�G���G%d\n", n, k, result);

    return 0;
}
