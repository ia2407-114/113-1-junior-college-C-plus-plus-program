#include <stdio.h>

double avg_score(intarr[4][5],int1en);

int main(void)
{
	int score[4][5] = { 0 };
	int i = 0;
	int avg = 0.0;

	for (i = 0;i <= 4;i++)

	printf("輸入學號: \n");
	scanf_s("%d", &score[0][1]);
	printf("輸入計概成績: \n");
	scanf_s("%d", &score[1][i]);
	printf("輸入數學成績: \n");
	scanf_s("%d", &score[2][i]);
}

totalav = avg_score(score, 5);
printf("\n");
printf("全班成績表如下\n");
	int f = 0;
	int b = 0;
	for (b=0 ; b<= 3 ; b++)
	{
		for (f = 0; f <= 4; f++)
		{
			printf("%d", score[b][f]);
		}
		printf("\n");
	}
	printf("全班總成績平均為:%f\n", avg);
}

double avg_score(int a[4][5], int l)
{
	double avg = 0.0;
	int i = 0;

	for (i = 0; i <= 4; i++)
	{
		a[3][i] = (a[1][i] + a[2][i]) / 2;
	}

	ttav = (a[3][0] + a[3][1] + a[3][2] + a[3][3] + a[3][4]) / 5;

	return avg;
}
