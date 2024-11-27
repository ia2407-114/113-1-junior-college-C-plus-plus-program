#include <stdio.h>
#include<string.h>

int sort_score(int arr[4][5], char names[5][10], int len);
// function main begins program execution
int main(void)
{
    int n[4][5] = { 0 }; // n is an array of five integers
    char names[5][10];
    float avg = 0;
    float median;
    for (size_t i = 0; i < 5; ++i) {
        printf("\n�п�J�ǥ�%d���Ǹ�:", i);
        scanf_s("%d", &n[0][i]); // set element at location i to 0
        printf("\n�п�J�ǥ�%d���p�����Z:", i);
        scanf_s("%d", &n[1][i]); // set element at location i to 0
        printf("\n�п�J�ǥ�%d���ƾǦ��Z:", i);
        scanf_s("%d", &n[2][i]); // set element at location i to 0
        printf("\n�п�J�ǥ�%d���m�W:", i);
        scanf_s("%s", names[i], 10); // set element at location i to 0
    }
    // �ƧǨíp�⤤���
    median = sort_score(n, names, 5);

    // ��X�Ƨǫ᪺���G
    printf("\n���Z���Z�����: %.0f\n", median);
    printf("%-10s %-10s %8s %8s %8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�", "����");
    for (size_t i = 0; i < 5; ++i) {
        printf("%-10s %-10d %8d %8d %8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }


    return 0;
}



int sort_score(int arr[4][5], char names[5][10], int len)
{
    float average = 0;
    int i,j,tame;
    char tame_name[10];

    // �p�⥭������
    for (i = 0; i < len; i++) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
    }

    // �_�w�ƧǡA�̷ӥ������ƥѰ���C�Ƨ�
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (arr[3][j] < arr[3][j + 1]) {
                // �洫���Ƹ��
                for (int k = 0; k < 4; k++) {
                    tame = arr[k][j];
                    arr[k][j] = arr[k][j + 1];
                    arr[k][j + 1] = tame;
                }
                // �洫�m�W
                strcpy_s(tame_name, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], tame_name);
            }
        }
    }

    // �p�⤤���
    if (len % 2 == 1) {
        return arr[3][len / 2]; // �_�ơA��������
    }
    else {
        return (arr[3][len / 2 - 1] + arr[3][len / 2]) / 2; // ���ơA��������ȥ���
    }
}

