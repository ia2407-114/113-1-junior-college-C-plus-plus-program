#include <stdio.h>

// studentData structure definition
struct studentData {
    unsigned int studentID; // student ID
    char Name[15]; // student name
    char math; // math grade
    char computer; // computer grade
    double avg; // student average grade
};

int main(void) {
    FILE* sfPtr=NULL; // students.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if (( fopen_s(&sfPtr,"students.dat", "wb")) != 0) {
        puts("File could not be opened.");
    }
    else {
        // create studentData with default information
        struct studentData student = { 0, "", 0, 0, 0.0 };

        // require user to specify student ID
        printf("Enter student ID (1 to 100, 0 to end input): ");
        scanf_s("%u", &student.studentID);

        // user enters information, which is copied into file
        while (student.studentID != 0) {
            // user enters name, math grade, computer grade, and average grade
            printf("Enter name, math grade, computer grade, average grade: ");
            scanf_s("%14s %9d %9d", student.Name,14, &student.math, &student.computer);
            student.avg = (student.math + student.math) / 2;
            // seek position in file to user-specified record
            fseek(sfPtr, (student.studentID - 1) * sizeof(struct studentData), SEEK_SET);

            // write user-specified information in file
            fwrite(&student, sizeof(struct studentData), 1, sfPtr);

            // enable user to input another student ID
            printf("Enter student ID: ");
            scanf_s("%u", &student.studentID);
        }

        fclose(sfPtr); // fclose closes the file
    }
    return 0;
}

