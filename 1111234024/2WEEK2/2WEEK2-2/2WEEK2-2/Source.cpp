//題目2.  利用第二個程式碼，將學生的資料完整印出
// Fig. 11.14: fig11_14.c
// Reading a random-access file sequentially
#include <stdio.h>

// clientData structure definition               
struct clientData {
    unsigned int ID; // account number
    char Name[15]; // account last name    
    int math, computer; // account first name   
    double average; // account balance   
};

int main(void)
{
    FILE* cfPtr;
    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr, "accounts.dat", "rb")) != 0)
    {
        puts("File could not be opened.");
    }
    else {
        printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name",
            "First Name", "Balance");

        // read all records from file (until eof)
        while (!feof(cfPtr))
        {
            // create clientData with default information
            struct clientData client = { 0, "",0,0, 0.0 };
            int result = fread(&client, sizeof(struct clientData), 1, cfPtr);


            if (result != 0 && client.ID != 0)
            {
                printf("%-6d%-16s%-11d%10d\n",
                    client.ID, client.Name,
                    client.math, client.computer);
            }
        }

        fclose(cfPtr); // fclose closes the file
    }
}