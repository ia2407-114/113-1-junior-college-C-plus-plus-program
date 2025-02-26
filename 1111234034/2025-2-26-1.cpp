//�D��1.�N�ǥ͵��c��J�d�ҵ{���X���A�ھھǸ� ID�A�z�L��L�N��Ƽg�J�ɮפ��A�n�O�o�N�W��P���ͪ��ť��ɮ׽ƻs��s���M�ץؿ��� 
// Fig. 11.11: fig11_11.c
// Writing data randomly to a random-access file
#include <stdio.h>

typedef struct student {   //�w�q���c
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;

int main(void)
{
    FILE* cfPtr; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr, "accounts.dat", "rb+")) != 0) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information
        stu client = { 0, "", 0.0, 0.0 };

        // require user to specify account number
        printf("%s", "Enter account number"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.ID);

        // user enters information, which is copied into file
        while (client.ID != 0) {
            // user enters last name, first name and balance
            printf("%s", "Enter math, comput, ID: ");

            // set record lastName, firstName and balance value
            scanf_s("%14s%9s", client.name, 14,
                &client.math, &client.AVG);
            client.AVG = (client.math + client.comput) / 2;

            // seek position in file to user-specified record   
            fseek(cfPtr, (client.ID - 1) *
                sizeof(stu), SEEK_SET);

            // write user-specified information in file              
            fwrite(&client, sizeof(stu), 1, cfPtr);

            // enable user to input another account number
            printf("%s", "Enter account number: ");
            scanf_s("%d", &client.ID);
        }

        fclose(cfPtr); // fclose closes the file
    }
}