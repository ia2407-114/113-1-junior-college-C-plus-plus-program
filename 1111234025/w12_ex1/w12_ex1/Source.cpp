#include <stdio.h>

double avg_score(int student[5][4], char names[5][10], int len);

void main(void)
{
	int student[5][4] = { 0 };
	char names[5][10];
	int i;
	double average = 0.0;

	for (i = 0; i < 5; i++)
	{
		printf("�п�J��%d��P�Ǫ��Ǹ��G", i + 1);
		scanf_s("%d", &student[i][0]);

		printf("�п�J��%d��P�Ǫ��p�����Z�G", i + 1);
		scanf_s("%d", &student[i][1]);

		printf("�п�J��%d��P�Ǫ��ƾǦ��Z�G", i + 1);
		scanf_s("%d", &student[i][2]);
		printf("�п�J��%d��P�Ǫ��m�W�G", i + 1);
		scanf_s("%s", names[i], 10);
	}

	average = avg_score(student, names, 5);


	printf("\n%s%8s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�", "����");

	for (i = 0; i < 5; i++)
	{
		printf("%s%8d%10d%10d%10d\n", names[i], student[i][0], student[i][1], student[i][2], student[i][3]);
	}

	printf("�Z�ť����G%lf\n", average);

}

double avg_score(int student[5][4], char names[5][10], int len)
{
	int i;
	double total = 0.0;
	for (i = 0; i < len; i++)
	{
		student[i][3] = (student[i][1] + student[i][2]) / 2;
		total += student[i][3];
	}

	return (total / len);
}