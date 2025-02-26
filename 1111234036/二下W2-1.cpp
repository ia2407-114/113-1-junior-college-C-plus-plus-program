#include <stdio.h>


struct studentData {
    unsigned int ID;
    char Name[15];
    double math;
    double computer;
    double average;
};

int main(void)
{
    FILE* sfPtr;


    if (fopen_s(&sfPtr, "students.dat", "rb+") != 0) {
        puts("File could not be opened.");
    }
    else {

        struct studentData student = { 0, "", 0.0, 0.0, 0.0 };

        // �n�D�ϥΪ̫��w�Ǹ�
        printf("%s", "Enter student ID (1 to 100, 0 to end input): ");
        scanf_s("%d", &student.ID);

        // �ϥΪ̿�J��T�A�N��T�ƻs���ɮפ�
        while (student.ID != 0) {
            // �ϥΪ̿�J�m�W�B�ƾǦ��Z�B�p������Z�M�������Z
            printf("%s", "Enter Name, math grade, computer grade: ");

            // �]�w�O���� Name�Bmath�Bcomputer �M average ��
            scanf_s("%14s%lf%lf", student.Name, sizeof(student.Name), &student.math, &student.computer);

            // �p�⥭�����Z
            student.average = (student.math + student.computer) / 2.0;

            // �ھڨϥΪ̫��w���O����m�M���ɮצ�m
            fseek(sfPtr, (student.ID - 1) * sizeof(struct studentData), SEEK_SET);

            // �N�ϥΪ̫��w����T�g�J�ɮ�
            fwrite(&student, sizeof(struct studentData), 1, sfPtr);

            // ���\�ϥΪ̿�J�t�@�ӾǸ�
            printf("%s", "Enter student ID: ");
            scanf_s("%d", &student.ID);
        }

        fclose(sfPtr); // fclose �����ɮ�
    }
}