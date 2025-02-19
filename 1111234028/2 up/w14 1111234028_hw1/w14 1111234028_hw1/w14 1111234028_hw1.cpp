// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 5

int sort_score(int a[2][SIZE], int len);
void swap(int a[2][SIZE], int r, int c);
void chemwhythwhojo(int* j1, int* j2);
// function main begins program execution
int main(void)
{
	// initialize a
	int a[2][SIZE] = { 0 }, mid;

	puts("Data items in original order");

	// output original array
	for (size_t i = 0; i < SIZE; ++i) {//��J�Ǹ����Z
		printf("input ID: ");
		scanf_s("%d", &a[0][i]);
		printf("input score: ");
		scanf_s("%d", &a[1][i]);
	}

	// original order
	printf("�Ǹ� ");
	for (size_t i = 0; i < SIZE; ++i)
		printf("%4d", a[0][i]);
	printf("\n���Z ");
	for (size_t i = 0; i < SIZE; ++i)
		printf("%4d", a[1][i]);

	mid = sort_score(a, SIZE);

	puts("\nData items in ascending order");

	// output sorted array
	printf("�Ǹ� ");
	for (size_t i = 0; i < SIZE; ++i)
		printf("%4d", a[0][i]);
	printf("\n���Z ");
	for (size_t i = 0; i < SIZE; ++i)
		printf("%4d", a[1][i]);

	printf("\n�����: %d", mid);
	puts("");
}

int sort_score(int a[2][SIZE], int len)
{
	int pass, i, hold, sum = 0;
	// bubble sort                                         
// loop to control number of passes                    
	for (pass = 1; pass < len; ++pass) {

		// loop to control number of comparisons per pass   
		for (i = 0; i < len - 1; ++i) {

			// compare adjacent elements and swap them if first 
			// element is greater than second element           
			if (a[1][i] < a[1][i + 1])
			{
				chemwhythwhojo(&a[1][i], &a[1][i + 1]);
				chemwhythwhojo(&a[0][i], &a[0][i + 1]);
			}
		}
	}

	//for (i = 0;i < len;i++)
	  //  sum += a[1][i];
	return a[1][len / 2];
}

void swap(int a[2][SIZE], int r, int c)
{
	int jj;
	jj = a[r][c];
	a[r][c] = a[r][c + 1];
	a[r][c + 1] = jj;
}

void chemwhythwhojo(int* j1, int* j2)
{
	int jj;

		jj = *j1;
		*j1 = *j2;
		*j2 = jj;
	
}