#include <stdio.h>
int fact(int X) {
    int result = 1;
    for (int i = 1; i <= X; i++) {
        result *= i;  
    }
    return result;
}

int main() {
    int X;
    printf("�п�J�@��X��: ");
    scanf_s("%d", &X);
        printf("%d������ = %d\n", X, fact(X));
    return 0;
}
