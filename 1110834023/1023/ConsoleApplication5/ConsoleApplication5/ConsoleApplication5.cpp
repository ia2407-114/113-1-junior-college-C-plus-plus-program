#include <stdio.h>
// 題目一
int fact(int x);

int main() {
    int x;

    printf("請輸入X ：\n");
    scanf_s("%d", &x);

    printf("%d 的階乘為：%d\n", x, fact(x));

    return 0;
}

int fact(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;  
    }
    return result;
}
