#include <stdio.h>

int main() {
    int n, i = 1;
    printf("½Ð¿é¤J¼Æ¦rn:");
    scanf_s("%d", &n);
    while (i <= n) {
        printf("%d  %d\n", i, i * i);
        i++;
    }

    return 0;
}

