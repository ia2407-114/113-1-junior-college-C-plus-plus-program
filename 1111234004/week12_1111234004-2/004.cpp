#include <stdio.h>

void avg_score(int student[5][4], int len);
int sort_score(int score[5], int sort[5], int len);

// �C��ǥͪ�����
int score[5] = { 0 };

// �Ƨǫ᪺�ǥͶ���
int sort[5] = { 0, 1, 2, 3, 4 };



void main(void)
{
	// student[�ǥͤH��][�Ǹ�, �p��, �ƾ�, ����]
	int student[5][4] = { 0 };
	char names[5][10] = { "" };
	int i, mid;

	for (i = 0; i < 5; i++)
	{
		printf("�п�J��%d��P�Ǫ��m�W�G", i + 1);
		scanf_s("%s", names[i], 10);

		printf("�п�J��%d��P�Ǫ��Ǹ��G", i + 1);
		scanf_s("%d", &student[i][0]);

		printf("�п�J��%d��P�Ǫ��p�����Z�G", i + 1);
		scanf_s("%d", &student[i][1]);

		printf("�п�J��%d��P�Ǫ��ƾǦ��Z�G", i + 1);
		scanf_s("%d", &student[i][2]);
	}
	avg_score(student, 5);

	// �L�X�Ƨǫe���Z
	printf("\n�Ƨǫe���Z:\n");
	printf("%s%8s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�", "����");

	for (i = 0; i < 5; i++)
	{
		printf("%s%10d%10d%10d%10d\n", names[i], student[i][0], student[i][1], student[i][2], student[i][3]);
	}

	// �L�X�Ƨǫᦨ�Z
	mid = sort_score(score, sort, 5);
	printf("\n\n�Ƨǫᦨ�Z:\n");
	printf("%s%8s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�", "����");
	for (i = 0; i < 5; i++)
	{
		int num = sort[i];
		printf("%s%10d%10d%10d%10d\n", names[num], student[num][0], student[num][1], student[num][2], student[num][3]);
	}

	// �L�X�����
	printf("�Z�Ť���ơG%d\n", mid);

}

void avg_score(int student[5][4], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		student[i][3] = (student[i][1] + student[i][2]) / 2;
		score[i] = student[i][3];
	}
}

int sort_score(int score[5], int sort[5], int len)
{
	int i, j, temp;

	// �j����
	for (i = 0; i < len - 1; i++)
	{
		// ��X�̤p���ƭ�
		for (j = 0; j < len - i - 1; j++)
		{
			if (score[j] < score[j + 1]) {
				temp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = temp;

				temp = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = temp;
			}
		}

	}

	// �̤������ƭ�
	return score[2];
}