#include <stdio.h>

int main() {
    int n, i = 1;
    printf("�п�J�Ʀrn:");
    scanf_s("%d", &n);
    while (i <= n) {
        printf("%d  %d\n", i, i * i);
        i++;
    }

    return 0;
}

