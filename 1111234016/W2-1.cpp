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

        
        printf("%s", "Enter student ID (1 to 100, 0 to end input): ");
        scanf_s("%d", &student.ID);
        
        while (student.ID != 0) {
           
            printf("%s", "Enter Name, math grade, computer grade: ");

          
            scanf_s("%14s%lf%lf", student.Name, sizeof(student.Name), &student.math, &student.computer);

          
            student.average = (student.math + student.computer) / 2.0;

         
            fseek(sfPtr, (student.ID - 1) * sizeof(struct studentData), SEEK_SET);

     
            fwrite(&student, sizeof(struct studentData), 1, sfPtr);

       
            printf("%s", "Enter student ID: ");
            scanf_s("%d", &student.ID);
        }

        fclose(sfPtr);
    }
}
