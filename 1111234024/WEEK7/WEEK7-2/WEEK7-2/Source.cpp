#include <stdio.h>


int fact(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result; 
}

int main() {
    int x;
    printf("�п�J�@�Ӿ��X�G");
    scanf_s("%d", &x);

    
    printf("%d������ = %d\n", x, fact(x));

    return 0;
}