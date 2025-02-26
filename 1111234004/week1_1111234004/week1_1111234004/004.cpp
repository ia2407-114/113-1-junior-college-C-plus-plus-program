// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

// clientData structure definition            
typedef struct clientData {
    unsigned int acctNum; // account number
    char lastName[15]; // account last name    
    char firstName[10]; // account first name   
    double balance; // account balance      
}client;

int main(void)
{
    FILE* cfPtr =NULL; // accounts.dat file pointer //建立檔案指標

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr,"accounts.dat", "wb")) !=0) { //開啟檔案
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information       
        client blankClient = { 0, "", "", 0.0 };

        // output 100 blank records to file                              
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(client), 1, cfPtr);
        }

        fclose(cfPtr); // fclose closes the file
    }
}