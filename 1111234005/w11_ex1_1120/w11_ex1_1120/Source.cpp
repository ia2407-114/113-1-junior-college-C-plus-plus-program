#include <stdio.h>

// ��ƫŧi
float avg(int s[4][5]);

int main() {
    // �w�q�G���}�C
    int s[4][5] = { 0 }; //[�C][��]

    // �ϥΪ̿�J�Ǹ��P���Z
    printf("�п�J%d��ǥͪ��Ǹ��P���Z�]�p���P�ƾǡ^�G\n", 4);
    for (int i = 0; i < 4; i++) {
        printf("�Ǹ��G");
        scanf_s("%d", &s[i][0]);
        printf("�p�����Z�G");
        scanf_s("%d", &s[i][1]);
        printf("�ƾǦ��Z�G");
        scanf_s("%d", &s[i][2]);
    }

    // �I�s�Ƶ{���A�p�⥭��
    float total_avg = avg(s);

    // �L�X�C��ǥͪ��������Z
    printf("\n�Ǹ�\t�p��\t�ƾ�\t����\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t%d\t%d\t%.1f\n", s[i][0], s[i][1], s[i][2], (float)s[i][3]);
    }

    // �L�X�`����
    printf("\n����: %.2f\n", total_avg);

    return 0;
}

// �Ƶ{���G�p�⥭�����Z
float avg(int s[4][5]) {
    float total_sum = 0; // �����`��
    int total_scores = 0; // �`����

    for (int i = 0; i < 4; i++) {
        int sum = 0;
        // �p��C��ǥͪ����Z�`�M
        sum = s[i][1] + s[i][2];
        s[i][3] = sum / 2.0; // �s�J�������Z
        total_sum += s[i][3]; // �֥[�������Z
        total_scores++;
    }
    return total_sum / total_scores; // �Ǧ^�`����
}