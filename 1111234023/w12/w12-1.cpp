#include <stdio.h>

double avg_score(int a[4][5], int l);


int main(void)
{
	int score[4][5] = { 0 };
	int i = 0;
	double totallong = 0.0;


	for (i = 0; i <= 4; i++)
	{
		printf("�п�J�Ǹ�\n");
		scanf_s("%d", &score[0][i]);
		printf("�п�J�p��\n");
		scanf_s("%d", &score[1][i]);
		printf("�п�J�ƾ�\n");
		scanf_s("%d", &score[2][i]);
	}

	totallong = avg_score(score, 5);
	printf("\n");
	printf("���Z���Z��p�U\n");
	int e = 0;
	int q = 0;
	for (q = 0; q <= 3; q++)
	{
		for (e = 0; e <= 4; e++)
		{
			printf("%d		", score[q][e]);
		}
		printf("\n");
	}
	printf("���Z�`���Z������:%lf\n", totallong);
}