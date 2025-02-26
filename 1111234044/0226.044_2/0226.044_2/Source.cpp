#include <stdio.h>

// �w�q�ǥ͵��c
struct Student {
    unsigned int id;      // �Ǹ�
    char lastName[15];    // �m��
    char firstName[10];   // �W�r
    unsigned int age;     // �~��
    double gpa;           // GPA
};

int main(void) {
    FILE* fPtr; // �ɮ׫���
    struct Student student = { 0, "", "", 0, 0.0 }; // ��l�ƾǥ͵��c

    // �H�G�i��Ū���Ҧ��}���ɮ�
    if ((fPtr = fopen("students.dat", "rb")) == NULL) {
        puts("�ɮ׵L�k�}�ҡI");
        return 1;
    }

    // ��ܪ��Y
    printf("%-6s%-16s%-11s%-6s%6s\n", "ID", "Last Name", "First Name", "Age", "GPA");

    // Ū������ܾǥ͸��
    while (fread(&student, sizeof(struct Student), 1, fPtr) == 1) {
        printf("%-6u%-16s%-11s%-6u%6.2f\n",
            student.id, student.lastName, student.firstName,
            student.age, student.gpa);
    }

    fclose(fPtr); // �����ɮ�

    return 0;
}
