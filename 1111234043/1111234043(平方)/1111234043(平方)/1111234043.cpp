#include <stdio.h>

int main() {
    int n, i = 1;

    printf("�п�J�n��ܪ��ƶq n: ");
    scanf_s("%d", &n);
    while (i <= n) {
        printf("%d\t%d\n", i, i * i);
        i++;
    }

    return 0;
}