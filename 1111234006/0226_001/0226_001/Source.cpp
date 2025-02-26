/*�D��1.�N�ǥ͵��c��J�d�ҵ{���X���A�ھھǸ� ID�A�z�L��L�N��Ƽg�J�ɮפ��A�n�O�o�N�W��P���ͪ��ť��ɮ׽ƻs��s���M�ץؿ���*/
#include <stdio.h>

// �w�q���c�� clientData�A�Ψ��x�s�ǥ͸��
struct clientData {
    unsigned int ID;        // �Ǹ� (ID)
    char Name[15];          // �m�W (�̦h 14 �r�� + ������ '\0')
    char math, computer;    // �ƾǦ��Z�P�p������Z�]�ϥ� char �����x�s 0-100 �����ơ^
    double balance;         // �ǥ;l�B�]�i�H�O�B�I�ơ^
};

int main(void)
{
    FILE* cfPtr = NULL; // �ŧi�ɮ׫���
    typedef struct clientData stu; // �� struct clientData �i�H�� stu �ӥN��

    // ���եHŪ���M�g�J�Ҧ��]rb+�^�}���ɮסA�p�G�L�k�}�ҫh����
    if (fopen_s(&cfPtr, "accounts.dat", "rb+") != 0) {
        puts("File could not be opened."); // �p�G�ɮ׵L�k�}�ҡA��X���~�T��
    }
    else {
        // �Ыؤ@�� clientData ���c���ܼƨê�l��
        struct clientData client = { 0, "", 0, 0, 0.0 };

        // �n�D�ϥΪ̿�J�b���s�� (�Ǹ�)�A�Ǹ��d�� 1 �� 100�A0 �N������J
        printf("%s", "Enter account number"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.ID);

        // ��ϥΪ̿�J�Ǹ����� 0 �ɡA�~��n�D��J�ǥ͸��
        while (client.ID != 0) {
            // �n�D�ϥΪ̿�J�m�W�B�ƾǦ��Z�B�p������Z�B�l�B
            printf("%s", "Enter lastname, firstname, balance: ");

            // Ū���ǥͪ��m�W�A����̦h 14 �Ӧr��
            scanf_s("%14s", client.Name, sizeof(client.Name));
            // Ū���ƾǦ��Z�M�p������Z�A�åB�ഫ�� char ���O
            scanf_s("%hhd%hhd%lf", &client.math, &client.computer, &client.balance);

            // �ھھǸ��p��n�g�J����m�A�N��Ƽg�J�ɮ�
            fseek(cfPtr, (client.ID - 1) *
                sizeof(struct clientData), SEEK_SET);

            // �N�ǥ͸�Ƽg�J�ɮ�
            fwrite(&client, sizeof(struct clientData), 1, cfPtr);

            // ���ܨϥΪ̿�J�t�@�ӾǸ��A�p�G�Ǹ��� 0 �h������J
            printf("%s", "Enter account number: ");
            scanf_s("%d", &client.ID);
        }

        fclose(cfPtr); // fclose �����ɮ�
    }
}
