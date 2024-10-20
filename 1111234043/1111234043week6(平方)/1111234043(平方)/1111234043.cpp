#include <stdio.h>

int main() {
    int n, i = 1;

    printf("請輸入要顯示的數量 n: ");
    scanf_s("%d", &n);
    while (i <= n) {
        printf("%d\t%d\n", i, i * i);
        i++;
    }

    return 0;
}