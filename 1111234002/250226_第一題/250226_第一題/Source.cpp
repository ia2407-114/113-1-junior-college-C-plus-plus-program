/*�D��1.  �N�ǥ͵��c��J�d�ҵ{���X���A�ھھǸ� ID�A�z�L��L�N��Ƽg�J�ɮפ��A�n�O�o�N�W��P���ͪ��ť��ɮ׽ƻs��s���M�ץؿ���*/
#include <stdio.h>

// �w�q�ǥ͸�Ƶ��c
struct studentData {
    unsigned int ID;       // �ǥ;Ǹ�
    char lastName[15];     // �m��]�̦h 14 �Ӧr���^
    char firstName[10];    // �W�r�]�̦h 9 �Ӧr���^
    int math;              // �ƾǦ��Z
    int comput;            // �p������Z
    float avg;             // �������Z
};

int main(void)
{
    FILE* cfPtr; // studentData.dat �ɮ׫���
    struct studentData student = { 0, "", "", 0, 0, 0.0 }; // ��l�ƾǥ͸��
    unsigned int inputID; // �Ψ��x�s�Τ��J���Ǹ�

    // ���ն}���ɮסA�p�G�L�k�}�ҫh��ܿ��~�T���ðh�X
    if (fopen_s(&cfPtr, "studentData.dat", "rb+")) {
        // �p�G�ɮפ��s�b�A�h�Ыؤ@�ӷs�ɮ�
        if (fopen_s(&cfPtr, "studentData.dat", "wb+")) {
            puts("File could not be opened.");
            return 1;
        }
    }

    // ��J�Ǹ�
    printf("%s", "Enter student ID (1 to 100, 0 to end input): ");
    scanf_s("%u", &student.ID);

    // �Τ��J��ƨüg�J�ɮ�
    while (student.ID != 0) {
        // �Τ��J�ǥ͸��
        printf("Enter last name, first name, math score, comput score, and average score: ");
        fscanf_s(stdin, "%14s %9s %d %d ", student.lastName, sizeof(student.lastName), student.firstName, sizeof(student.firstName), &student.math, &student.comput);

        // �ϥ� fseek �w�����w���ǥ;Ǹ���m
        fseek(cfPtr, (student.ID - 1) * sizeof(struct studentData), SEEK_SET);

        // �g�J�ǥ͸�ƨ��ɮ�
        fwrite(&student, sizeof(struct studentData), 1, cfPtr);

        // ���ܥΤ��J�U�@�ӾǸ�
        printf("%s", "Enter student ID (1 to 100, 0 to end input): ");
        scanf_s("%u", &student.ID);
    }

    fclose(cfPtr); // �����ɮ�
    return 0;
}

