#include <stdio.h>

int main() {
    int n;  // �ΨӦs��ϥΪ̿�J�����ؼƶq
    double pi = 0.0;  // �ΨӦs��p��X�� pi ��
    int i = 0;  // �Ψӭp��
    double sign = 1.0;  // �Ψӧ��ܲŸ�

   
    printf("�п�J�n�p�⪺���ؼƶq: ");
    scanf_s("%d", &n);

   
    while (i < n) {
        pi += sign * (4.0 / (2 * i + 1));  
        sign = -sign;  
        i++;  
    }

    
    printf("�ھ� %d ���p��X�� pi �Ȭ�: %.15f\n", n, pi);

    return 0;
}
