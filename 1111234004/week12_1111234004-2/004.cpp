#include <stdio.h>

void avg_score(int student[5][4], int len);
int sort_score(int score[5], int sort[5], int len);

// 每位學生的平均
int score[5] = { 0 };

// 排序後的學生順序
int sort[5] = { 0, 1, 2, 3, 4 };



void main(void)
{
	// student[學生人數][學號, 計概, 數學, 平均]
	int student[5][4] = { 0 };
	char names[5][10] = { "" };
	int i, mid;

	for (i = 0; i < 5; i++)
	{
		printf("請輸入第%d位同學的姓名：", i + 1);
		scanf_s("%s", names[i], 10);

		printf("請輸入第%d位同學的學號：", i + 1);
		scanf_s("%d", &student[i][0]);

		printf("請輸入第%d位同學的計概成績：", i + 1);
		scanf_s("%d", &student[i][1]);

		printf("請輸入第%d位同學的數學成績：", i + 1);
		scanf_s("%d", &student[i][2]);
	}
	avg_score(student, 5);

	// 印出排序前成績
	printf("\n排序前成績:\n");
	printf("%s%8s%8s%8s%8s\n", "姓名", "學號", "計概", "數學", "平均");

	for (i = 0; i < 5; i++)
	{
		printf("%s%10d%10d%10d%10d\n", names[i], student[i][0], student[i][1], student[i][2], student[i][3]);
	}

	// 印出排序後成績
	mid = sort_score(score, sort, 5);
	printf("\n\n排序後成績:\n");
	printf("%s%8s%8s%8s%8s\n", "姓名", "學號", "計概", "數學", "平均");
	for (i = 0; i < 5; i++)
	{
		int num = sort[i];
		printf("%s%10d%10d%10d%10d\n", names[num], student[num][0], student[num][1], student[num][2], student[num][3]);
	}

	// 印出中位數
	printf("班級中位數：%d\n", mid);

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

	// 大次數
	for (i = 0; i < len - 1; i++)
	{
		// 找出最小的數值
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

	// 最中間的數值
	return score[2];
}