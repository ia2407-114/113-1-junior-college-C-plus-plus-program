#include <stdio.h>

double avg_score(int a[4][5], int l);


int main(void)
{
	int score[4][5] = { 0 };
	int i = 0;
	double totallong = 0.0;


	for (i = 0; i <= 4; i++)
	{
		printf("請輸入學號\n");
		scanf_s("%d", &score[0][i]);
		printf("請輸入計概\n");
		scanf_s("%d", &score[1][i]);
		printf("請輸入數學\n");
		scanf_s("%d", &score[2][i]);
	}

	totallong = avg_score(score, 5);
	printf("\n");
	printf("全班成績表如下\n");
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
	printf("全班總成績平均為:%lf\n", totallong);
}