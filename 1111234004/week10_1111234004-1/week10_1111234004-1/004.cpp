#include <iostream>
#include <cstdio>   // �ޤJ printf ��ƪ����Y�ɮ�

using namespace std;

// �Ƶ{���G�p��C�~���Q�M
void calculateBalance(double principal, double annualRate) {
    for (int year = 1; year <= 10; ++year) {
        principal += principal * annualRate;  // �C�~���Q�M�p��
        // �ϥ� printf ��X�C�~���Q�M�A�O�d���p��
        printf("�� %d �~: %.2f ��\n", year, principal);  // %.2f �O����ܨ��p��
    }
}

int main() {
    double principal, annualRate;

    // �ШϥΪ̿�J����
    printf("�п�J����: ");
    scanf_s("%lf", &principal); //�ϥ� cin �q��LŪ���ϥΪ̿�J������

    // �ШϥΪ̿�J�~�Q�v
    printf("�п�J�~�Q�v (�Ҧp 0.05 ��� 5%): ");
    scanf_s("%lf", &annualRate);  // �ϥ� cin �q��LŪ���ϥΪ̿�J���~�Q�v

    // �I�s�Ƶ{���p�����ܵ��G
    calculateBalance(principal, annualRate);

    return 0;  // �����D�{��
}
