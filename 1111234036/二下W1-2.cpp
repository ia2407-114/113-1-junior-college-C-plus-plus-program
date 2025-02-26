#include <stdio.h>

typedef struct student {
    int ID;
    char name[20];
    int math, comput;
    float AVG;
} stu;

int main(void) {
    FILE* cfPtr = NULL;

    // �}���ɮסA�i��Ū�g (r+b)
    if (fopen_s(&cfPtr, "accounts.dat", "r+b") != 0) {
        puts("File could not be opened.");
        return 1; // �����{��
    }

    stu newStudent;
    int inputID;

    // ���ϥΪ̿�J�Ǹ�
    printf("Enter student ID (1-100, 0 to exit): ");
    scanf_s(" %d", &inputID); // �קK����Ű��D

    while (inputID != 0) {
        // �ˬd ID �O�_����
        if (inputID < 1 || inputID > 100) {
            printf("Invalid ID! Enter a number between 1-100.\n");
        }
        else {
            newStudent.ID = inputID;

            // �M����J�w�İϡA�קK�v�T `scanf`
            while (getchar() != '\n');

            printf("Enter name: ");
            scanf(" %[^\n]", newStudent.name); // Ū������m�W�A�䴩�Ů�

            printf("Enter math score: ");
            scanf_s(" %d", &newStudent.math);

            printf("Enter computer score: ");
            scanf_s(" %d", &newStudent.comput);

            // �p�⥭�����Z
            newStudent.AVG = (newStudent.math + newStudent.comput) / 2.0;

            // �����ɮ׫���
            fseek(cfPtr, (inputID - 1) * sizeof(stu), SEEK_SET);

            // �g�J�ӵ����
            fwrite(&newStudent, sizeof(stu), 1, cfPtr);

            printf("Data for student %d saved!\n\n", inputID);
        }

        // ���ϥΪ̿�J�U�@�����
        printf("Enter student ID (1-100, 0 to exit): ");
        scanf_s(" %d", &inputID);
    }

    fclose(cfPtr);
    puts("Data entry complete.");
    return 0;
}