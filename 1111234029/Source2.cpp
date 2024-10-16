#include <stdio.h>

int main() {
    int terms, i = 1;
    double pi = 0.0, sign = 1.0;

    printf("請輸入項目數量: ");
    scanf_s("%d", &terms);

    while (i <= terms) {
        pi += sign * (4.0 / (2 * i - 1));
        sign = -sign; // 交替變號
        i++;
    }

    printf("近似的 pi 值為: %.15f\n", pi);

    return 0;
}