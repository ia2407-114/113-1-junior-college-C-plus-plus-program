#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[20];
	int id, math, comput;
	float avg;
} stu;

void sort_score(stu my_class[5], int len);
void printScore(stu my_class[5], int len);

// int linear(int search_key, int student[5][4], int len);
// void avg_score(int student[5][4], int len);
// int ascending(int score1, int score2);
// int desending(int score1, int score2);
// void swapPtr(char* Ptr1, char* Ptr2);


// a 1 60 20 b 2 10 30 c 3 90 30 d 4 40 50 e 5 10 60
void main(void)
{
	// student[�ǥͤH��][�Ǹ�, �p��, �ƾ�, ����]
	stu my_class[5];
	int i, j, search_key;

	for (i = 0; i < 5; i++)
	{
		printf("�п�J��%d��P�Ǫ��m�W�G", i + 1);
		scanf_s("%s", my_class[i].name, 10);
		// �N�r��O�����m�s����а}�C

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



	//int result, search_key2;

	//printf("�п�J�n�j�M���ǥ;Ǹ��G");
	//scanf_s("%d", &search_key);

	//result = linear(search_key, student, 5);
	//if (result != -1) {
	//	printf("�b�}�C����%d��\n", result);
	//	printf("\n%s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�");
	//	printf("%s%10d%10d%10d\n", names[result], student[result][0], student[result][1], student[result][2]);
	//}
	//else {
	//	printf("�䤣�즹�����!");
	//}
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


	// �j����
	for (i = 0; i < len - 1; i++)
	{
		// ��X�̤p���ƭ�
		for (j = 0; j < len - i - 1; j++)
		{
			if (my_class[j].avg < my_class[j + 1].avg) {
				// �i��j��N�N��O�n�洫
				temp = my_class[j];
				my_class[j] = my_class[j + 1];
				my_class[j + 1] = temp;
			}
		}

	}
}


/*
int linear(int search_key, int student[5][4], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (student[i][0] == search_key) {
			return i;
		}
	}
	return -1;
}

void avg_score(int student[5][4], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		student[i][3] = (student[i][1] + student[i][2]) / 2;
		// score[i] = student[i][3];
	}
}

void swapPtr(char* Ptr1, char* Ptr2)
{
	char* tempPtr;
	// �m�W����
	tempPtr = Ptr1;
	Ptr1 = Ptr2;
	Ptr2 = tempPtr;
}


// True�N��n�ܦ��Ѥp��j(�n�i��j��N��쥻����ƬO�e�̸��j)
// ���W
int ascending(int score1, int score2)
{
	return score1 > score2;
}


// True�N��n�ܦ��Ѥj��p(�n�i��j��N��쥻����ƬO��̸��j)
// ����
int desending(int score1, int score2)
{
	return score1 < score2;
}
*/