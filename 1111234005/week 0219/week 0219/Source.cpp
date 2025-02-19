// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>


typedef struct student {   //�w�q���c
    int     ID;//�Ǹ�
    char    name[20];//�m�W
    int     math;//�ƾǩM�q��
    int     comput;
    float   AVG;//����
}stu;
int main(void)
{
    FILE* cfPtr; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr,"students.dat", "wb")) == NULL) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information       
        stu blankStudent = { 0, "", 0, 0,0.0 };

        // output 100 blank records to file                              
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankStudent, sizeof(stu), 1, cfPtr);
        }

        fclose(cfPtr); // fclose closes the file
    }


    return 0;
}
 