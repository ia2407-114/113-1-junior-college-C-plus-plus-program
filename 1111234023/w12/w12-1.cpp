#include <stdio.h>

float avg_score(int arr[4][5], char names[5][10], int len);


int main(void)
{
	int score[4][5] = { 0 };
	int i = 0;
	double totallong = 0.0;
	char names[5][10];

	for (i = 0; i <= 4; i++)
	{
		printf("輸入你的名字\n");
		scanf_s("%s", names[i], 10);
		printf("輸入學號\n");
		scanf_s("%d", &score[0][i]);
		printf("輸入計概\n");
		scanf_s("%d", &score[1][i]);
		printf("輸入數學\n");
		scanf_s("%d", &score[2][i]);
	}
	totallong = avg_score(score, names, 5);
	printf("全班總成績平均為:%f\n", totallong);
}

float avg_score(int arr[4][5], char names[5][10], int len)
{
	double totallong = 0.0;
	int i = 0;

	for (i = 0; i <= 4; i++)
	{
		arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
	}

	printf("\n%s%4s%8s%8s%8s", "姓名", "學號", "數學", "計概", "平均\n");
	int e = 0;
	for (e = 0; e <= 4; e++)
	{
		printf("%s%4d%8d%8d%8d\n", names[e], arr[0][e], arr[1][e], arr[2][e], arr[3][e]);
	}
	printf("\n");

	totallong = (arr[3][0] + arr[3][1] + arr[3][2] + arr[3][3] + arr[3][4]) / 5;

	return totallong;
}
