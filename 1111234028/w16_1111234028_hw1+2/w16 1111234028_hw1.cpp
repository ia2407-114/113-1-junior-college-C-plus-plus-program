#include <stdio.h>
#define SIZE 5

typedef struct students
{
	char name[20];
	int ID, math, computer;
	float avg;
}stu;

int sort_score(struct students j[], int len);
void print(struct students j[], int i);

int main(void)
{
	stu j[SIZE];
	float mid;
	int i;

	for (size_t i = 0; i < SIZE; ++i) {//輸入學號成績
		printf("input ur name: ");
		scanf_s("%s", &j[i].name,19);
		printf("input ur ID: ");
		scanf_s("%d", &j[i].ID);
		printf("input ur math: ");
		scanf_s("%d", &j[i].math);
		printf("input ur computer: ");
		scanf_s("%d", &j[i].computer);
		j[i].avg = (j[i].math + j[i].computer) / 2;
	}

	printf("名字		學號	數學	電腦	平均\n");

	for (i = 0; i <= 4; i++)
	{
		print(j, i);
	}

	mid = sort_score(j, SIZE);

	printf("名字	學號	數學	電腦	平均\n");
	for (i = 0; i <= 4; i++)
	{
		print(j, i);
	}

}


int sort_score(struct students j[], int len)
{
	students temp;
	int pass, i, hold, sum = 0;
	// bubble sort                                         
// loop to control number of passes                    
	for (pass = 1; pass < len; ++pass) {

		// loop to control number of comparisons per pass   
		for (i = 0; i < len - 1; ++i) {

			// compare adjacent elements and swap them if first 
			// element is greater than second element           
			if (j[i].avg < j[i + 1].avg) {
				temp = j[i];
				j[i] = j[i + 1];
				j[i + 1] = temp;
			}
		}
	}

	//for (i = 0;i < len;i++)
	  //  sum += a[1][i];
	return j[SIZE / 2].avg;
}

void print(struct students j[], int i)
{
	printf("%4s", j[i].name);
	printf("%4d", j[i].ID);
	printf("%4d", j[i].math);
	printf("%4d", j[i].computer);
	printf("%4f\n", j[i].avg);
}