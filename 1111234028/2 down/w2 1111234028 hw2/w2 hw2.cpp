// Fig. 11.14: fig11_14.c
// Reading a random-access file sequentially
#include <stdio.h>

// clientData structure definition               
typedef struct clientData {
	unsigned int ID; // account number
	char Name[15]; // account last name    
	int math, computer; // account first name   
	double AUG; // account balance   
}stu;

int main(void)
{
	FILE* cfPtr; // accounts.dat file pointer


	if (fopen_s(&cfPtr, "student.dat", "rb") != 0) {
		puts("File could not be opened.\n");
	}
	else {
		printf("%6s%16s%11s%10s\n", "Acct", "Math",
			"computer", "AUG");


		while (!feof(cfPtr)) {

			stu client = { 0, "",0,0, 0.0 };
			int result = fread(&client, sizeof(struct clientData), 1, cfPtr);

			if (result != 0 && client.ID != 0) {
				printf("%6d%10s%16d%11d%10lf\n",
					&client.ID, &client.Name, &client.math, &client.computer, &client.AUG);
			}
		}

		fclose(cfPtr);
	}
}