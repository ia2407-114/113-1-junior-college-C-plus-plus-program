//�D��1.�g�@�ӥD�{���A�z�L��L��J�����B�~�Q�v�A�A�إߤ@�ӰƵ{���ǤJ�o�T�ӰѼơA�p��C�~�����Q�M����Ǧ^��J�}�C���@�@10�~�A�åB�L�X�}�C�����Q�M���G�C
#include <stdio.h>

int main()
{
    double f, p;

    printf("�п�J����");
    scanf_s("%lf", &f);
    printf("�п�J�~�Q�v(%)");
    scanf_s("%lf", &p);

    double results[10];

    for (int i = 0; i < 10; ++i)
    {
        f *= (1 + p / 100);
        results[i] = f;
    }

    printf("����10�~���C�~���Q�M�p�U\n");

    for (int i = 0; i < 10; ++i) {
        printf("��%d�~: %lf��\n", i + 1, results[i]);
    }

    return 0;
}