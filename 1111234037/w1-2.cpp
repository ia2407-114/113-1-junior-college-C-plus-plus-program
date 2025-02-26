// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

// student structure definition
typedef struct student {
    int ID;
    char name[20];
    int math;
    int comput;
    float AVG;
} stu;

int main(void)
{
    FILE* cfPtr;

    // fopen opens the file; exits if file cannot be opened
    if ((cfPtr = fopen("students.dat", "wb")) == NULL) {
        puts("File could not be opened.");
    }
    else {
        // create student with default information       
        stu blankStudent = { 0, "", 0, 0, 0.0 };

        // output 100 blank records to file                              
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankStudent, sizeof(stu), 1, cfPtr);
        }

        fclose(cfPtr); // fclose closes the file
    }
}
