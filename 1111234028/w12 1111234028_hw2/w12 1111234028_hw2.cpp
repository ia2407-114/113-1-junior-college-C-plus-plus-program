#include <stdio.h>
#include <string.h>

int sort_score(int a[4][5], char names[5][10], int len);


int main(void)
{
	int score[4][5] = { 0 };
	int j = 0;
	int mid = 0;
	char names[5][10];

	for (j = 0; j <= 4; j++)
	{
		printf("what is ur 念\n");
		scanf_s("%s", names[j], 10);
		printf("請輸入學號\n");
		scanf_s("%d", &score[0][j]);
		printf("請輸入計概\n");
		scanf_s("%d", &score[1][j]);
		printf("請輸入數學\n");
		scanf_s("%d", &score[2][j]);
	}

	printf("\n排序前:\n%s%4s%8s%8s%8s\n", "姓名", "學號", "數學", "機概", "平均");
	int e = 0;
	for (e = 0; e <= 4; e++)
	{
		printf("%s%4d%8d%8d%8d\n", names[e], score[0][e], score[1][e], score[2][e], score[3][e]);
	}
	printf("\n");

	mid = sort_score(score, names, 5);

	printf("\n排序前:\n%s%4s%8s%8s%8s\n", "姓名", "學號", "數學", "機概", "平均");

	for (e = 0; e <= 4; e++)
	{
		printf("%s%4d%8d%8d%8d\n", names[e], score[0][e], score[1][e], score[2][e], score[3][e]);
	}

	printf("\n全班總成績中位數為:%d\n", mid);
}

int sort_score(int a[4][5], char names[5][10], int len)
{
	int i, j, l;
	int temp;
	char tem[10];

	for (i = 0; i <= 4; i++)
	{
		a[3][i] = (a[1][i] + a[2][i]) / 2;
	}

	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= 4; j++)
		{

			if (a[3][j] < a[3][j + 1])
			{
				for (l = 0; l <= 3; l++)
				{
					temp = a[l][j];
					a[l][j] = a[3][j + 1];
					a[l][j + 1] = temp;
				}
			}
			strcpy_s(tem, names[j]);
			strcpy_s(names[j], names[j + 1]);
			strcpy_s(names[j + 1], tem);
		}
	}

	return a[3][len] / 2;
}