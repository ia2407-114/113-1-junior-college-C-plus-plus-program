//�D��1. �Ыإ�C�{���A�z�L��L��J�n��ܪ����G���ƶqn�A��while�j��̧����1~n���ƭȻP�L������ȡA�C�@�ƭȦ��@��A�p�U�ҥܡG
//1  1
//2  4
//3  9
#include <stdio.h>

int main() {
    int n, i = 1;

    // ��J�n��ܪ��ƶq
    printf("�п�J�n��ܪ��ƶq n: ");
    scanf_s("%d", & n);

    // �ϥ� while �j����� 1 �� n ���ƭȤΥ����
    while (i <= n) {
        printf("%d\t%d\n", i, i * i);
        i++;
    }

    return 0;
}

