#include <stdio.h>

int main()

{
    double C, P;

    printf("�п�J����");
    scanf_s("%lf", & C);
    printf("�п�J�~�Q�v(%)");
    scanf_s(" %lf", &P);

        double results[10];

    for (int i = 0; i < 10; ++i)
    {
        C*=(1 + P / 100);
            results[i] = C;
    }
    printf("����10�~���C�~���Q�M�p�U\n");
        for (int i = 0; i < 10; ++i) {
            printf("��%d�~�G%1f��\n", i + 1, results[i]);
        }
    return 0;
}