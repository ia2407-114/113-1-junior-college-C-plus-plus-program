#include <stdio.h>

void c(double p, double rate, double jia[], int years)
{
    for (int i = 0; i < years; i++)
    {
        p += p * rate / 100;
        jia[i] = p;
    }
}

int main() {
    double p, rate;
    int years = 10;
    double jia[10];

    printf("��J����: ");
    scanf_s("%lf", &p);
    printf("��J�~�Q�v�]�ʤ���^: ");
    scanf_s("%lf", &rate);

    c(p, rate, jia, years);

    printf("�C�~�����Q�M���G�p�U:\n");
    for (int i = 0; i < years; i++) {
        printf("�� %d �~: %.2f\n", i + 1, jia[i]);
    }

    return 0;
}