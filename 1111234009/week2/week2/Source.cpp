// Fig. 11.11: fig11_11.c
// Writing data randomly to a random-access file
#include <stdio.h>

// clientData structure definition               
typedef struct clientData {
    unsigned int id; // account number
    char Name[15]; // account last name    
    int math, computer; // account first name   
    double avg; // account balance   
}stu;

int main(void)
{
    FILE* cfPtr; // accounts.dat file pointer
    int target = 0;

    // fopen opens the file; exits if file cannot be opened
    if (fopen_s(&cfPtr, "score.dat", "wb+") != 0)
    {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information
        stu client = { 0, "", 0,0, 0.0 };

        // require user to specify account number
        printf("%s", "Enter id"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.id);

        // user enters information, which is copied into file
        while (client.id != 0) {
            // user enters last name, first name and balance
            printf("%s", "Enter name, math, computer: ");

            // set record lastName, firstName and balance value
            scanf_s("%9s%d%d",
                client.Name, 14, &client.math, &client.computer);

            client.avg = (float)(client.math + client.computer) / 2;
            // seek position in file to user-specified record   
            fseek(cfPtr, (client.id - 1) *
                sizeof(struct clientData), SEEK_SET);

            // write user-specified information in file              
            fwrite(&client, sizeof(struct clientData), 1, cfPtr);

            // enable user to input another account number
            printf("%s", "Enter id: ");
            scanf_s("%d", &client.id);
        }

        fseek(cfPtr, 0, SEEK_SET);

        while (!feof(cfPtr))
        {
            stu client_r = { 0, "", 0,0, 0.0 };
            int result = fread(&client_r, sizeof(stu), 1, cfPtr);

            if (result != 0)
            {
                printf("\n%10d%10s%10d%10d%30lf\n", client_r.id, client_r.Name, client_r.math, client_r.computer, client_r.avg);
            }
        }
        puts("\ninput target ");
        scanf_s("%d", &target);
        fseek(cfPtr, (target - 1) * sizeof(struct clientData), SEEK_SET);
        stu client_r = { 0, "", 0,0, 0.0 };
        int result = fread(&client_r, sizeof(stu), 1, cfPtr);

        if (result != 0)
        {
            printf("\n%10d%10s%10d%10d%30lf\n", client_r.id, client_r.Name, client_r.math, client_r.computer, client_r.avg);
        }
        else
        {
            puts("\n沒有東西:))))\n");
        }

        fclose(cfPtr); // fclose closes the file
    }
}