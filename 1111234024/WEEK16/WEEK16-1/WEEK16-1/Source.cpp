#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[20];
	int id, math, comput;
	float avg;
} stu;

void sort_score(stu my_class[5], int len);
void printScore(stu my_class[5], int len);

void main(void)
{	
	stu my_class[5];

	int i, j, search_key;

	for (i = 0; i < 5; i++)
	{
		printf("�п�J��%d��P�Ǫ��m�W�G", i + 1);
		scanf_s("%s", my_class[i].name, 10);
		

		printf("�п�J��%d��P�Ǫ��Ǹ��G", i + 1);
		scanf_s("%d", &my_class[i].id);

		printf("�п�J��%d��P�Ǫ��ƾǦ��Z�G", i + 1);
		scanf_s("%d", &my_class[i].math);

		printf("�п�J��%d��P�Ǫ��q�����Z�G", i + 1);
		scanf_s("%d", &my_class[i].comput);

		my_class[i].avg = (float)(my_class[i].math + my_class[i].comput) / 2;
	}
	printScore(my_class, 5);
	sort_score(my_class, 5);
	printScore(my_class, 5);	
}

void printScore(stu my_class[5], int len)
{
	int i;
	printf("\n%s%8s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�ƾ�", "�q��", "����");

	for (i = 0; i < 5; i++)
	{
		printf("%s%10d%10d%8d	%f\n", my_class[i].name, my_class[i].id, my_class[i].math, my_class[i].comput, my_class[i].avg);
	}
}
void sort_score(stu my_class[5], int len)
{
	int i, j;
	stu temp;


	
	for (i = 0; i < len - 1; i++)
	{
		
		for (j = 0; j < len - i - 1; j++)
		{
			if (my_class[j].avg < my_class[j + 1].avg) {
			
				temp = my_class[j];
				my_class[j] = my_class[j + 1];
				my_class[j + 1] = temp;
			}
		}

	}
}
