#include <stdio.h>

double avg_score(inta[4][5],int1);

int main(void)
{
	int score[4][5] = { 0 };
	int i = 0;
	int totalav = 0.0;

	for (i = 0;i <= 4;i++)

	printf("��J�Ǹ�: \n");
	scanf_s("%d", &score[0][1]);
	printf("��J�p�����Z: \n");
	scanf_s("%d", &score[1][i]);
	printf("��J�ƾǦ��Z: \n");
	scanf_s("%d", &score[2][i]);
}

totalav = avg_score(score, 5);
printf("\n");
printf("���Z���Z��p�U\n");
	int f = 0;
	int b = 0;
	for (b=0 ; b<= 3 ; b++)
	{
		for (f = 0; f <= 4; f++)
		{
			printf("%d		", score[q][f]);
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