#include <stdio.h>

float avg_score(int array[5][4]); //[��C][����]

int main() {
    int data[5][4] = { 0 }; // �ŧi�}�C

    for (int i = 0; i < 5; i++) {
        printf("�Ǹ�: ");
        scanf_s("%d", &data[i][0]);  // �Ǹ�
        printf("�p�����Z: ");
        scanf_s("%d", &data[i][1]);  // �p�����Z
        printf("�ƾǦ��Z: ");
        scanf_s("%d", &data[i][2]);  // �ƾǦ��Z
    }
    float total_avg = avg_score(data); // �I�s�Ƶ{�� avg_score

    printf("\n�Ǹ�\t�p��\t�ƾ�\t����\n");    // �����D

    for (int i = 0; i < 5; i++) {    // �L�X�ǥ͸�ƻP�������Z
        printf("%d\t%d\t%d\t%.1f\n", data[i][0], data[i][1], data[i][2], (float)data[i][3]);
    }
    printf("���Z�`����: %.2f\n", total_avg);

    return 0;
}
float avg_score(int array[5][4]) {
    float total_avg = 0.0;
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 1; j <= 2; j++) { // �p�⦨�Z
            sum += array[i][j];
        }
        float avg = (float)sum / 2;  // �p��C�H����
        array[i][3] = avg;          // �s�J�}�C
        total_avg += avg;
    }
    return total_avg / 5; // �Ǧ^����
}