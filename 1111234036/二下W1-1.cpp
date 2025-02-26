// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

typedef struct student {   //�w�q���c
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;
int main(void)
{
    FILE* cfPtr = NULL; // �ɮ׫���


    // �ϥ� fopen_s �}�� accounts.dat �ɮ�
    if ((fopen_s(&cfPtr, "accounts.dat", "wb")) != NULL) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information       
        stu blankClient = { 0, "", 0 , 0.0 };

        // output 100 blank records to file                              
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(stu), 1, cfPtr);
        }

        fclose(cfPtr); // fclose closes the file
    }
}