// Fig. 11.11: fig11_11.c
// Writing data randomly to a random-access file
#include <stdio.h>

// clientData structure definition               
struct clientData {
    unsigned int ID; // account number
    char Name[15]; // account last name    
    char Math,Computer; // account first name   
    double Average; // account balance   
};

int main(void)
{
    FILE* cfPtr; // accounts.dat file pointer
    typedef struct clientData stu;
    // fopen opens the file; exits if file cannot be opened
    if (fopen_s(&cfPtr,"accounts.dat", "wb+") != 0) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information
        struct clientData client = { 0, 0, 0, 0.0 };

        // require user to specify account number
        printf("%s", "Enter account number"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.ID);

        // user enters information, which is copied into file
        while (client.ID != 0) {
            // user enters last name, first name and balance
            printf("%s", "name, Math, Computer: ");

            // set record lastName, firstName and balance value
            fscanf_s(stdin, "%14s%9d%9d", client.Name,14,
                &client.Math, &client.Computer);
            client.Average = (client.Math + client.Computer) / 2;
            // seek position in file to user-specified record   
            fseek(cfPtr, (client.ID - 1) *
                sizeof(struct clientData), SEEK_SET);

            // write user-specified information in file              
            fwrite(&client, sizeof(stu), 1, cfPtr);

            // enable user to input another account number
            printf("%s", "Enter account number: ");
            scanf_s("%d", &client.ID);
        }

        fclose(cfPtr); // fclose closes the file
    }
}