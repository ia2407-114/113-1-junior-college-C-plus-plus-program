#include <stdio.h>

int main() {
    int terms, i = 0;
    double pi = 0.0;


    printf("�п�J���ؼƶq: ");
    scanf_s("%d", &terms);


    while (i < terms) {

        if (i % 2 == 0) {
            pi += 4.0 / (2 * i + 1);
        }
        else {
            pi -= 4.0 / (2 * i + 1);
        }
        i++;
    }


    printf("pi ����Ȭ�: %.10f\n", pi);

    return 0;
}