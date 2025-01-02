#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], int len, char* sn[SIZE]);
void sawp_n(char* stu1, char* stu2);

int main(void)
{
	int a[2][SIZE] = { 0 }, mid;
	char* names[5];
	char sn[5][20];

	puts("Data items in original order");

	for (size_t i = 0; i < SIZE; ++i) {
		printf("input Name: ");
		scanf_s("%s", sn[i], 19);
		names[i] = sn[i];
		printf("input ID: ");
		scanf_s("%d", &a[0][i]);
		printf("input score: ");
		scanf_s("%d", &a[1][i]);
	}

	printf("\n�W�r ");
	for (size_t i = 0; i < SIZE; ++i)
		printf("%4s", names[i]);
	printf("\n�Ǹ� ");
	for (size_t i = 0; i < SIZE; ++i)
		printf("%4d", a[0][i]);
	printf("\n���Z ");
	for (size_t i = 0; i < SIZE; ++i)
		printf("%4d", a[1][i]);



	mid = sort_score(a, SIZE, names);

	puts("\nData items in ascending order");

	printf("\n�W�r ");
	for (size_t i = 0; i < SIZE; ++i)
		printf("%4s", names[i]);
	printf("\n�Ǹ� ");
	for (size_t i = 0; i < SIZE; ++i)
		printf("%4d", a[0][i]);
	printf("\n���Z ");
	for (size_t i = 0; i < SIZE; ++i)
		printf("%4d", a[1][i]);

	printf("\n�����: %d", mid);
	puts("");
}


int sort_score(int a[2][SIZE], int len, char* sn[])
{
	int pass, i, hold, sum = 0;
                 
	for (pass = 1; pass < len; ++pass) {
 
		for (i = 0; i < len - 1; ++i) {
         
			if (a[1][i] < a[1][i + 1]) {
				hold = a[1][i];
				a[1][i] = a[1][i + 1];
				a[1][i + 1] = hold;
				hold = a[0][i];
				a[0][i] = a[0][i + 1];
				a[0][i + 1] = hold;
				sawp_n(sn[i], sn[i + 1]);
			}
		}
	}

	return a[1][len / 2];
}



void sawp_n(char* stu1, char* stu2)
{
	char* temp;
	temp = stu1;
	stu1 = stu2;
	stu2 = temp;
}