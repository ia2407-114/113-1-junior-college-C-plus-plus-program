#include <stdio.h>

int fact(int X) {
    int result = 1;
    for (int i = 1; i <= X; i++) {
        result *= i;
    }
    return result;
}


double exponen(int Z) {
    double sum = 1.0; 
    for (int i = 1; i <= Z; i++) {
        sum += 1.0 / fact(i);  
    }
    return sum;
}

int main() {
    int Z;
    printf("�п�JZ�ȶ��ؼƶq: ");
    scanf_s("%d", &Z);
        printf("e������Ȭ�: %.10f\n", exponen(Z)); 
    return 0;
}
