#include <stdio.h>

typedef struct clientData {
	int accountNum;
	char lastName[15];
	char firstName[10];
	double balance;
} client;

typedef struct student {
	int id;
	char name[20];
	int math, comput;
	float avg;
} stu;

void main(void)
{
	FILE* cfPtr;
	stu stuData = {0, "", 0, 0, 0.0 };

	if (fopen_s(&cfPtr, "stu002.dat", "rb+") != 0) { //fopen_s���\�إߨåB�}�Ҧ^�ǭȬ�0
		puts("File could not be opened");
	}
	else {
		printf("�п�J�ǥ�ID:");
		scanf_s("%d", &stuData.id);

		while (stuData.id != 0) {
			printf("%s", "�п�Jname, math, comput, avg:");
			fscanf_s(stdin, "%s", stuData.name, 20);
			fscanf_s(stdin, "%d", &stuData.math);
			fscanf_s(stdin, "%d", &stuData.comput);
			fscanf_s(stdin, "%f", &stuData.avg);
			fseek(cfPtr, (stuData.id - 1) * sizeof(stu), SEEK_SET);
			fwrite(&stuData, sizeof(stu), 1, cfPtr);

			printf("%s", "��J�ǥ�ID:");
			scanf_s("%d", &stuData.id);
		}
		
		fclose(cfPtr);
	}
}