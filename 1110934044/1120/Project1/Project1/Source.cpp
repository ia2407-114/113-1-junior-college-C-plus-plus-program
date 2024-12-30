#include <stdio.h>

float avg_score(int arr[4][5], int len);

int main(void) {
    int n[4][5] = { 0 };

    for (int i = 0; i < 5; ++i) {
        printf("�п�J�ǥ�%d���Ǹ��G", i + 1);
        scanf_s("%d", &n[0][i]);

        printf("�п�J�ǥ�%d���p�����Z�G", i + 1);
        scanf_s("%d", &n[1][i]);

        printf("�п�J�ǥ�%d���ƾǦ��Z�G", i + 1);
        scanf_s("%d", &n[2][i]);
    }

    float average = avg_score(n, 5);

    printf("%8s%8s%8s%8s\n", "�Ǹ�", "�p��", "�ƾ�", "����");
    for (int i = 0; i < 5; ++i) {
        printf("%8d%8d%8d%8.2f\n", n[0][i], n[1][i], n[2][i], (float)n[3][i]);
    }

    printf("�Ҧ��ǥͪ��������Z���G%.2f\n", average);

    return 0;
}

float avg_score(int arr[4][5], int len) {
    float totalAverage = 0;

    for (int i = 0; i < len; i++) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2; 
        totalAverage += arr[3][i];             
    }

    return totalAverage / len; 
}
