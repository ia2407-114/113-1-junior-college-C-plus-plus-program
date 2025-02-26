#include <stdio.h>

typedef struct student {   // �w�q���c���x�s�ǥ͸��
    int     ID;            // �ǥ;Ǹ�
    char    name[20];      // �ǥͩm�W�A�̦h 20 �Ӧr��
    int     math;          // �ƾǦ��Z
    int     comput;        // �p������Z
    float   AVG;           // �ǥͪ��������Z
} stu;

int main(void)
{
    FILE* cfPtr; // ���V�ɮת�����

    // ���եH�G�i��Ū�g�Ҧ� (rb+) ���}�ɮסA�p�G�L�k�}�ҡA�h�h�X
    if ((fopen_s(&cfPtr, "accounts.dat", "rb+")) != 0) { // �ק�fopen_s�y�k
        puts("�ɮ׵L�k�}�ҡC");
    }
    else {
        struct student client = { 0, "", 0, 0, 0.0 }; // ��l�Ƶ��c�� client

        // ���ܨϥΪ̿�J�Ǹ�
        printf("�п�J�Ǹ��]1 �� 100�A��J 0 ������J�^�G");
        scanf_s("%d", &client.ID);  // Ū���Ǹ�

        // ��Ǹ����� 0 �ɡA�~��i���ƿ�J
        while (client.ID != 0) {

            // ���ܨϥΪ̿�J�m�W�B�ƾǦ��Z�P�q�����Z
            printf("�п�J�m�W�B�ƾǦ��Z�P�p������Z�G");

            // �ϥ� fscanf_s �q��LŪ���ϥΪ̿�J�����
            // �ݭn�B�~�ǤJ�W�r�j�p
            fscanf_s(stdin, "%14s", client.name, (unsigned)_countof(client.name));  // �[�W�r��̤j����
            fscanf_s(stdin, "%d%d", &client.math, &client.comput);  // Ū���ƾǩM�p������Z

            // �p�⥭�����Z
            client.AVG = (client.math + client.comput) / 2.0;

            // �����ɮ׫��Ш�����Ǹ�����m
            fseek(cfPtr, (client.ID - 1) * sizeof(struct student), SEEK_SET);

            // �g�J��ƨ��ɮ�
            fwrite(&client, sizeof(struct student), 1, cfPtr);

            // �A�����ܥΤ��J�Ǹ�
            printf("�п�J�Ǹ��]1 �� 100�A��J 0 ������J�^�G");
            scanf_s("%d", &client.ID);  // Ū���Ǹ�
        }

        fclose(cfPtr); // �����ɮ�
    }
}
