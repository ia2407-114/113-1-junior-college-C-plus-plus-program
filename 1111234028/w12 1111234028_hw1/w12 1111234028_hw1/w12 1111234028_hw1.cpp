#include <stdio.h>

float avg_score(int a[4][5], char names[5][10], int l);


int main(void)
{
	int score[4][5] = { 0 };
	int j = 0;
	float totalav = 0.0;
	char names[5][10];

	for (j = 0; j <= 4; j++)
	{
		printf("what is ur ��\n");
		scanf_s("%s", names[j], 10);
		printf("�п�J�Ǹ�\n");
		scanf_s("%d", &score[0][j]);
		printf("�п�J�p��\n");
		scanf_s("%d", &score[1][j]);
		printf("�п�J�ƾ�\n");
		scanf_s("%d", &score[2][j]);
	}

	totalav = avg_score(score, names, 5);

	printf("���Z�`���Z������:%f\n", totalav);
}

float avg_score(int a[4][5], char names[5][10], int l)
{
	double ttav = 0.0;
	int i = 0;

	for (i = 0; i <= 4; i++)
	{
		a[3][i] = (a[1][i] + a[2][i]) / 2;
	}

	printf("\n%s%4s%8s%8s%8s", "�m�W", "�Ǹ�", "�ƾ�", "����", "����\n");
	int e = 0;
	for (e = 0; e <= 4; e++)
	{
		printf("%s%4d%8d%8d%8d\n", names[e], a[0][e], a[1][e], a[2][e], a[3][e]);
	}
	printf("\n");

	ttav = (a[3][0] + a[3][1] + a[3][2] + a[3][3] + a[3][4]) / 5;

	return ttav;
}