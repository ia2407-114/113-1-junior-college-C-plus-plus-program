#include <stdio.h>         
typedef struct student {   //�w�q���c
    int     ID;
    char    name[20];
    int     math, comput;
}stu;

int main(void)
{
    FILE* cfPtr = NULL; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr, "student.dat", "wb")) != 0) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information       
        stu blankClient = { 0, "", 0,0 };
        // output 100 blank records to file     
        printf("�п�J�n��J���ǥ�(1~100��ǥ͡A��0����)\n");
        scanf_s("%d", &blankClient.ID);
        while (blankClient.ID != 0) {
            printf("�п�J�m�W\n");
            fscanf_s(stdin, "%s", blankClient.name,20);
            printf("�п�J�ƾǦ��Z\n");
            fscanf_s(stdin, "%d",&blankClient.math);
            printf("�п�J�q�����Z\n");
            fscanf_s(stdin, "%d",&blankClient.comput);
            fseek(cfPtr, (blankClient.ID - 1) * sizeof(struct student), SEEK_SET);
            fwrite(&blankClient, sizeof(stu), 1, cfPtr);
            printf("�n��J���ǥ�:");
            scanf_s("%d", &blankClient.ID);
        }


        fclose(cfPtr); // fclose closes the file
    }
}