/*�D��2.  �Q�βĤG�ӵ{���X�A�N�ǥͪ���Ƨ���L�X*/
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

    // ���ն}���ɮסA�p�G�L�k�}�ҫh��ܿ��~�T���ðh�X
    if (fopen_s(&cfPtr, "studentData.dat", "rb") != 0) {
        puts("File could not be opened.");
        return 1; // �L�k�}���ɮסA�h�X�{��
    }

    // ��ܼ��D��
    printf("%-6s%-16s%-11s%-10s%-10s%-10s\n", "ID", "Last Name", "First Name", "Math", "Comput", "Average");

    // Ū���Ҧ���ơ]�����ɮ׵����^
    struct studentData student;
    while (fread(&student, sizeof(struct studentData), 1, cfPtr) == 1) {
        // ��ܾǥ͸�ơA�����Ǹ��� 0 ������
        if (student.ID != 0) {
            printf("%-6d%-16s%-11s%-10d%-10d%-10.2f\n",
                student.ID, student.lastName, student.firstName,
                student.math, student.comput, student.avg);
        }
    }

    fclose(cfPtr); // �����ɮ�
    return 0;
}
