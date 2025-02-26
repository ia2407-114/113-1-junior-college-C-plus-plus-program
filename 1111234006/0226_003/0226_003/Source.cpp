/*�D��3. �ھګe�����D�ҫإߪ�����ɮסA�g�@�ӵ{���A��J�Ǹ���A�Y�Ǹ��s�b�B����0�A�h�L�X�ӵ����㪺��ơA�_�h�L�X"�ӵ���Ƥ��s�b"���T���C*/
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
    unsigned int inputID; // �Ψ��x�s�Τ��J���Ǹ�
    int found = 0; // �аO�O�_���ӵ����

    // ���ն}���ɮסA�p�G�L�k�}�ҫh��ܿ��~�T���ðh�X
    if (fopen_s(&cfPtr, "studentData.dat", "rb") != 0) {
        puts("File could not be opened.");
        return 1; // �ɮ׶}�ҥ��ѡA��^���~
    }

    // ��J�Ǹ�
    printf("Enter student ID to search: ");
    scanf_s("%u", &inputID);

    // �p�G�Ǹ��� 0�A�h���ܸ�Ƥ��s�b
    if (inputID == 0) {
        printf("�ӵ���Ƥ��s�b�C\n");
    }
    else {
        // Ū���ɮפ�����ƨä��Ǹ�
        while (1) {
            struct studentData student = { 0, "", "", 0, 0, 0.0 };

            // Ū���@�����
            int result = fread(&student, sizeof(struct studentData), 1, cfPtr);

            // �p�GŪ�����\�B�Ǹ��ǰt�A��ܸ��
            if (result == 1 && student.ID != 0) {
                if (student.ID == inputID) {
                    printf("%-6s%-16s%-11s%-10s%-10s%-10s\n", "ID", "Last Name", "First Name", "Math", "Comput", "Average");
                    printf("%-6d%-16s%-11s%-10d%-10d%-10.2f\n",
                        student.ID, student.lastName, student.firstName,
                        student.math, student.comput, student.avg);
                    found = 1;
                    break; // ����ƫᰱ��j�M
                }
            }
            else if (result != 1) {
                break; // �p�G�S����h��ơA���X�`��
            }
        }

        // �p�G�S�����ӾǸ�����ơA��ܴ��ܰT��
        if (!found) {
            printf("�ӵ���Ƥ��s�b�C\n");
        }
    }

    fclose(cfPtr); // �����ɮ�
    return 0;
}