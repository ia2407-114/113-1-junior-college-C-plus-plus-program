#include <stdio.h>
#include <stdlib.h>

int a(void); // �����Y������l�ê�^�`�M
void zu(int f[]); // ��ܬW����

int main(void) {
    int f[13] = { 0 };
    int ex; // ���禸��

   // ��J���禸��
    printf("��J���禸��: ");
    scanf_s("%d", &ex);

    // �����Y��l������
    for (int i = 0; i < ex; ++i) {
        int total = a(); // �Y��l����o�`�M
        f[total]++; // �ھ��`�M��s�W�v
    }
    // ��ܬW����
    zu(f);

    return 0;
}

// �����Y������l�ê�^�`�M
int a(void) {
    int d1 = 1 + (rand() % 6);
    int d2 = 1 + (rand() % 6);
    return d1 + d2;
}

// ��ƹ�{�G��ܬW����
void zu(int f[]) {
    for (int i = 2; i <= 12; ++i) { // �I�ƽd��O2��12
        printf("%d: %u ", i, f[i]); // ��ܨC���`�M���X�{����
        for (int j = 0; j < f[i]; ++j) {
            printf("*"); // �C���W�v�����@�ӬP��
        }
        printf("\n");
    }
}
