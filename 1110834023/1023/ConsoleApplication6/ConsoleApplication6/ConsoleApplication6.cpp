#include <stdio.h>
//題目二
int fact(int x);
double exponen(int z);

int main() {
    int z;

    printf("請輸入 z 項：\n");
    scanf_s("%d", &z);

    printf("展開式e 的近似值為：%lf\n", exponen(z));

    return 0;
}

int fact(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;  
    }
    return result;
}

double exponen(int z) {
    double result = 1.0;

    for (int i = 1; i <= z; i++) {
        result += 1.0 / fact(i); 
    }

    return result;
}
