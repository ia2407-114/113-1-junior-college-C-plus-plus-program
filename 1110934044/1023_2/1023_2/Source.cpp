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
    printf("請輸入一個X值: ");
    scanf_s("%d", &X);
        printf("%d的階乘 = %d\n", X, fact(X));
    return 0;
}
