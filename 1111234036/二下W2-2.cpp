#include <stdio.h>

// studentData ���c�w�q
struct studentData {
    unsigned int ID; // �Ǹ�
    char Name[15]; // �m�W
    double math; // �ƾǦ��Z
    double computer; // �p������Z
    double average; // �������Z
};

int main(void)
{
    FILE* sfPtr; // students.dat �ɮ׫���

    // fopen_s �}���ɮסF�p�G�ɮ׵L�k�}�ҫh�h�X
    if (fopen_s(&sfPtr, "students.dat", "rb") != 0) {
        puts("File could not be opened.");
    }
    else {
        printf("%-6s%-16s%-10s%-10s%10s\n", "ID", "Name",
            "Math", "Computer", "Average");

        // read all records from file (until eof)
        while (!feof(sfPtr)) {
            // create studentData with default information
            struct studentData student = { 0, "", 0.0, 0.0, 0.0 };

            int result = fread(&student, sizeof(struct studentData), 1, sfPtr);

            // display record
            if (result != 0 && student.ID != 0) {
                printf("%-6d%-16s%-10.2f%-10.2f%10.2f\n",
                    student.ID, student.Name,
                    student.math, student.computer, student.average);
            }
        }

        fclose(sfPtr); // fclose �����ɮ�
    }
}