#include <stdio.h>
#include <string.h>

int search(int key, int a[4][5], int len);                    

int sort_score(int arr[4][5], char names[5][10], int len);     

int main(void)
{
	int score[4][5] = { 0 };
	int j = 0;
	int key = 0;
	int find = 0;                                            
	char names[5][10];

	for (j = 0; j <= 4; j++)
	{
		printf("輸入你的名字: \n");
		scanf_s("%s", names[j], 10);
		printf("輸入學號\n");
		scanf_s("%d", &score[0][j]);
		printf("輸入計概\n");
		scanf_s("%d", &score[1][j]);
		printf("輸入數學\n");
		scanf_s("%d", &score[2][j]);
	}

	printf("輸入搜尋的學生學號:\n");
	scanf_s("%d", &key);
	find = search(key, score, 5);
	printf("\n查詢結果:\n");
	printf("%s%5s%5s%5s\n", "姓名", "學號", "數學", "計概");
	printf("%s%5d%5d%5d\n", names[find], score[0][find], score[1][find], score[2][find]);
}

int search(int key, int a[4][5], int len)
{
	int i = 0;
	for (i = 0; i <= 4; i++)
	{
		if ((a[0][i]) == key)
		{
			return i;
		}
	}
	return -1;
}

int sort_score(int arr[4][5], char names[5][10], int len)
{
	int i, j, l;
	int temp;
	char tem[10];

	for (i = 0; i <= 4; i++)
	{
		arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
	}

	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= 4; j++)
		{

			if (arr[3][j] < arr[3][j + 1])
			{
				for (l = 0; l <= 3; l++)
				{
					temp = arr[l][j];
					arr[l][j] = arr[3][j + 1];
					arr[l][j + 1] = temp;
				}
			}
		}
	}
	return 0;
}
