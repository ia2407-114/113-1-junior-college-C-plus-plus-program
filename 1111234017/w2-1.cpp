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


    if (fopen_s(&sfPtr, "students.dat", "rb") != 0) {
        puts("File could not be opened.");
    }
    else {
        printf("%-6s%-16s%-10s%-10s%10s\n", "ID", "Name",
            "Math", "Computer", "Average");


        while (!feof(sfPtr)) {

            struct studentData student = { 0, "", 0.0, 0.0, 0.0 };

            int result = fread(&student, sizeof(struct studentData), 1, sfPtr);


            if (result != 0 && student.ID != 0) {
                printf("%-6d%-16s%-10.2f%-10.2f%10.2f\n",
                    student.ID, student.Name,
                    student.math, student.computer, student.average);
            }
        }

        fclose(sfPtr);
    }
}