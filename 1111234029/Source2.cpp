#include <stdio.h>

int main() {
    int terms, i = 1;
    double pi = 0.0, sign = 1.0;

    printf("�п�J���ؼƶq: ");
    scanf_s("%d", &terms);

    while (i <= terms) {
        pi += sign * (4.0 / (2 * i - 1));
        sign = -sign; // ����ܸ�
        i++;
    }

    printf("����� pi �Ȭ�: %.15f\n", pi);

    return 0;
}