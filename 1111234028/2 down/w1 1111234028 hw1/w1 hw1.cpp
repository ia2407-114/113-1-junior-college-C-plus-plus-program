// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

// clientData structure definition            
struct studentI {
	unsigned int ID; // account number
	char Name[20]; // account last name    
	int math, comput; // account first name   
	float AVG; // account balance      
};

int main(void)
{
	FILE* cfPtr;
	errno_t err;
	err = (fopen_s(&cfPtr, "student.dat", "wb"));

	if (err != 0 || cfPtr == NULL) {
		puts("File could not be opened.");
	}
	else {

		struct studentI blankstudent = { 0, "",0,0, 0.0 };


		for (unsigned int i = 1; i <= 100; ++i) {
			fwrite(&blankstudent, sizeof(struct studentI), 1, cfPtr);
		}

		fclose(cfPtr);
	}
}