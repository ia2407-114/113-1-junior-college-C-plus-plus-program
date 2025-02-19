//�D��1�A�N�ǥ͵��c��J�d�ҵ{���X���A�קאּ�إ�100���ťվǥ͸��
// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>
// clientData structure definition            
typedef struct student {   //�w�q���c
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;

int main(void)
{
    FILE* cfPtr = NULL ; // accounts.dat file pointer  //�Ĥ@�B:�إ��ɮ׫���

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr,"accounts.dat", "wb")) !=0) {  //�ĤG�B:�}���ɮ�
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information       
        stu blankClient = { 0, "", 0, 0,0.0 };

        // output 100 blank records to file                              
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(stu), 1, cfPtr);  //�ĤT�B:�s/���ɮ� 
        }

        fclose(cfPtr); // fclose closes the file  //�ĥ|�B:�����ɮ�
    }
}