#include<stdio.h>
#include<math.h>
double bn(double ma, double le, int i);
int main(void) {
    double ma; // ����
    double le; // �~�Q�v
    double zn[10]; // �s��C�~���Q�M���}�C�A10�~

    // ��J�����P�~�Q�v
    printf("��J�����G");
    scanf_s("%lf", &ma);
    printf("��J�~�Q�v�G");
    scanf_s("%lf", &le);

    // �p��æs�J�}�C
    for (int i = 1; i <= 10; i++) {
        zn[i - 1] = bn(ma, le, i);
    }

    // ��X�C�~�����Q�M
    for (int i = 0; i < 10; i++) {
        printf("��%d�~�G%.2f\n", i + 1, zn[i]);
    }
    return 0;
}

// �p��C�~���Q�M���Ƶ{��
double bn(double ma, double le, int i) {
    double h; // ���Q�M
    h = ma * pow((1 + le), i);
    return h;
}