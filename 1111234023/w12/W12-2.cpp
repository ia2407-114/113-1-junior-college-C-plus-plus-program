#include <stdio.h>
#include <string.h>

int sort_score(int arr[4][5], char names[5][10], int len);


int main(void)
{
	int score[4][5] = { 0 };
	int i = 0;
	int midium = 0;
	char names[5][10];

	for (i = 0; i <= 4; i++)
	{
		printf("輸入你的名字\n");
		scanf_s("%s", names[i], 10);
		printf("輸入學號\n");
		scanf_s("%d", &score[0][i]);
		printf("輸入計概成績\n");
		scanf_s("%d", &score[1][i]);
		printf("輸入數學成績\n");
		scanf_s("%d", &score[2][i]);
	}

	printf("\n排序前:\n%s%4s%8s%8s%8s\n", "姓名", "學號", "數學成績", "計概成績", "平均");
	int e = 0;
	for (e = 0; e <= 4; e++)
	{
		printf("%s%4d%8d%8d%8d\n", names[e], score[0][e], score[1][e], score[2][e], score[3][e]);
	}
	printf("\n");

	midium = sort_score(score, names, 5);

	printf("\n排序前:\n%s%4s%8s%8s%8s\n", "姓名", "學號", "數學成績", "計概成績", "平均");

	for (e = 0; e <= 4; e++)
	{
		printf("%s%4d%8d%8d%8d\n", names[e], score[0][e], score[1][e], score[2][e], score[3][e]);
	}

	printf("\n全班總成績的中位數為:%d\n", midium);
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
