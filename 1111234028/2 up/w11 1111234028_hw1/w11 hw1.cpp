#include <stdio.h>

double avg_score(int a[4][5], int l);


int main(void)
{
	int score[4][5] = { 0 };
	int j = 0;
	double totalav = 0.0;


	for (j = 0; j <= 4; j++)
	{
		printf("�п�J�Ǹ�\n");
		scanf_s("%d", &score[0][j]);
		printf("�п�J�p��\n");
		scanf_s("%d", &score[1][j]);
		printf("�п�J�ƾ�\n");
		scanf_s("%d", &score[2][j]);
	}

	totalav = avg_score(score, 5);
	printf("\n");
	printf("���Z���Z��p�U\n");
	int e = 0;
	int q = 0;
	for (q=0 ; q<= 3 ; q++)
	{
		for (e = 0; e <= 4; e++)
		{
			printf("%d		", score[q][e]);
		}
		printf("\n");
	}
	printf("���Z�`���Z������:%lf\n", totalav);
}

double avg_score(int a[4][5], int l)
{
	double ttav = 0.0;
	int i = 0;

	for (i = 0; i <= 4; i++)
	{
		a[3][i] = (a[1][i] + a[2][i]) / 2;
	}

	ttav = (a[3][0] + a[3][1] + a[3][2] + a[3][3] + a[3][4]) / 5;

	return ttav;
}