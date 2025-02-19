#include <stdio.h>
#include <string.h>

int binary(int key, int a[4][5], int low, int high);

int sort_score(int a[4][5], char names[5][10], int len);


int main(void)
{
	int score[4][5] = { 0 };
	int j = 0;
	int key = 0;
	int find = 0;
	int high = 4;
	int low = 0;
	char names[5][10];

	for (j = 0; j <= 4; j++)
	{
		printf("what is ur ��\n");
		scanf_s("%s", names[j], 10);
		printf("�п�J�Ǹ�\n");
		scanf_s("%d", &score[0][j]);
		printf("�п�J�p��\n");
		scanf_s("%d", &score[1][j]);
		printf("�п�J�ƾ�\n");
		scanf_s("%d", &score[2][j]);
	}

	sort_score(score, names, 5);

	int e = 0;
	printf("\n�Ƨǫ�:\n%s%4s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�ƾ�", "����", "����");
	for (e = 0; e <= 4; e++)
	{
		printf("%s%4d%8d%8d%8d\n", names[e], score[0][e], score[1][e], score[2][e], score[3][e]);
	}

	printf("\n�п�J�n�j�M���ǥ;Ǹ�:\n");
	scanf_s("%d", &key);
	find = binary(key, score, low, high);
	if (find = -1)
	{
		printf("\n���j�M�쵲�G :(\n");
	}
	else
	{
		printf("\n�d�ߵ��G�p�U:\n");
		printf("%s%5s%5s%5s\n", "�m�W", "�Ǹ�", "�ƾ�", "����");
		printf("%s%5d%5d%5d\n", names[find], score[0][find], score[1][find], score[2][find]);
	}


}

int binary(int key, int a[4][5], int low, int high)
{
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (a[0][mid] < key)
		{
			high = mid - 1;
		}
		else if (a[0][mid] > key)
		{
			low = mid + 1;
		}
		else if (a[0][mid] == key)
		{
			return mid;
		}
	}
	return -1;
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
				temp = a[0][j];
				a[0][j] = a[0][j + 1];
				a[0][j + 1] = temp;
				temp = a[1][j];
				a[1][j] = a[1][j + 1];
				a[1][j + 1] = temp;
				temp = a[2][j];
				a[2][j] = a[2][j + 1];
				a[2][j + 1] = temp;
				temp = a[3][j];
				a[3][j] = a[3][j + 1];
				a[3][j + 1] = temp;
				strcpy_s(tem, names[j]);
				strcpy_s(names[j], names[j + 1]);
				strcpy_s(names[j + 1], tem);
			}
		}
	}
	return 0;
}