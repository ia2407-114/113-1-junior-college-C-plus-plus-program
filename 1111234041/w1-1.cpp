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
    errno_t err; 
    if ((err = fopen_s(&cfPtr, "students.dat", "wb")) != 0) {
        puts("File could not be opened.");
    }
    else {
        
        stu blankStudent = { 0, "", 0, 0, 0.0 };

                             
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankStudent, sizeof(stu), 1, cfPtr);
        }

        fclose(cfPtr); 
    }
}
