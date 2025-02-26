#include<stdio.h>

typedef struct clientData {
	unsigned int ID; // account number
	char Name[15]; // account last name    
	int math, computer; // account first name   
	double AUG; // account balance   
}stu;

int main(void)
{
	FILE* cfPtr;

	fopen_s(&cfPtr, "student.dat", "r");












}