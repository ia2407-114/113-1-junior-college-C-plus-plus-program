//題目1.  將學生結構放入範例程式碼中，根據學號 ID，透過鍵盤將資料寫入檔案中，要記得將上一周產生的空白檔案複製到新的專案目錄中
// Fig. 11.11: fig11_11.c
// Writing data randomly to a random-access file
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
    FILE* cfPtr; // accounts.dat file pointer
    typedef struct clientData stu;
    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr, "accounts.dat", "rb+")) != 0) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information
        struct clientData client = { 0, "", 0,0, 0.0 };

        // require user to specify account number
        printf("%s", "Enter account number"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.ID);

        // user enters information, which is copied into file
        while (client.ID != 0) {
            // user enters last name, first name and balance
            printf("%s", "Enter name, math, computer :");

            // set record lastName, firstName and balance value
            scanf_s("%14s%9d%9d", client.Name, 14,
                &client.math, &client.computer);
            client.average = (client.math = client.computer) / 2;
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