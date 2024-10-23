#include <stdio.h>
int fact(int X);
double exponen(int Z);

int fact(int X) {
    int result = 1;
    for (int i = 1; i <= X; i++) {
        result *= i;
    }
    return result;
}

double exponen(int Z) {
    double e = 1.0;  

    for (int i = 1; i <= Z; i++) {
        e += 1.0 / fact(i);  
    }

    return e; 
}

int main() {
    int Z;

    printf("�п�J���ؼƶqZ: ");
    scanf_s("%d", &Z);

    printf("e������Ȭ�: %.10lf\n", exponen(Z));

    return 0;
}
