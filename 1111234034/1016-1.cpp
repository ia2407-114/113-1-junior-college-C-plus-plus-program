#include <stdio.h>
//�D��1.�Ыإ�C�{���A�z�L��L��J�n��ܪ����G���ƶqn�A��while�j��̧����1~n���ƭȻP�L������ȡA�C�@�ƭȦ��@��A�p�U�ҥܡG
//1  1
//2  4
//3  9
int main() {
    int n, i = 1, i++;;
    printf("�п�J�n��ܪ��ƶq n: ");
    scanf_s("%d", &n);
    while (i <= n) {
        printf("%d%d\n", i, i * i);       
    }
    return 0;
}