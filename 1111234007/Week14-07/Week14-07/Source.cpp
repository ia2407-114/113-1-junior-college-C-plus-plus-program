#include <stdio.h>
#include <string.h>

int linear(int search_key, int student[5][3], int len);
void sort_id(int student[5][3], char names[5][10], int len);
int binary(int search_key2, int student[5][3], int len);


// a 1 10 20 b 2 20 30 c 3 30 40 d 4 40 50 e 5 50 60
void main(void)
{
	// student[學生人數][學號, 計概, 數學]
	int student[5][3] = { 0 };
	char names[5][10] = { "" };
	int i, j, search_key;

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

	printf("\n%s%8s%8s%8s\n", "姓名", "學號", "計概", "數學");

	for (i = 0; i < 5; i++)
	{
		printf("%s%10d%10d%10d\n", names[i], student[i][0], student[i][1], student[i][2]);
	}



	int result, search_key2;

	printf("請輸入要搜尋的學生學號：");
	scanf_s("%d", &search_key);

	result = linear(search_key, student, 5);
	if (result != -1) {
		printf("在陣列中第%d個\n", result);
		printf("\n%s%8s%8s%8s\n", "姓名", "學號", "計概", "數學");
		printf("%s%10d%10d%10d\n", names[result], student[result][0], student[result][1], student[result][2]);
	}
	else {
		printf("找不到此筆資料!");
	}

	// binary
	sort_id(student, names, 5);
	printf("\n%s%8s%8s%8s\n", "姓名", "學號", "計概", "數學");

	for (i = 0; i < 5; i++)
	{
		printf("%s%10d%10d%10d\n", names[i], student[i][0], student[i][1], student[i][2]);
	}



	printf("請輸入要搜尋的學生學號：");
	scanf_s("%d", &search_key2);

	result = binary(search_key2, student, 5);
	if (result != -1) {
		printf("\n在陣列中第%d個\n", result);
		printf("\n%s%8s%8s%8s\n", "姓名", "學號", "計概", "數學");
		printf("%s%10d%10d%10d\n", names[result], student[result][0], student[result][1], student[result][2]);
	}
	else {
		printf("找不到此筆資料!");
	}

}

int linear(int search_key, int student[5][3], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (student[i][0] == search_key) {
			return i;
		}
	}
	return -1;
}

void sort_id(int student[5][3], char names[5][10], int len)
{
	int i, j, temp;
	char tem[10];

	// 大次數
	for (i = 0; i < len - 1; i++)
	{
		// 找出最大的數值
		for (j = 0; j < len - i - 1; j++)
		{
			if (student[j][0] > student[j + 1][0]) {
				// 學號
				temp = student[j][0];
				student[j][0] = student[j + 1][0];
				student[j + 1][0] = temp;

				// 計概
				temp = student[j][1];
				student[j][1] = student[j + 1][1];
				student[j + 1][1] = temp;

				// 數學
				temp = student[j][2];
				student[j][2] = student[j + 1][2];
				student[j + 1][2] = temp;

				// 姓名
				strcpy_s(tem, names[j]);
				strcpy_s(names[j], names[j + 1]);
				strcpy_s(names[j + 1], tem);

			}
		}

	}
}


int binary(int search_key2, int student[5][3], int len)
{
	int low, high, mid, i;
	low = 0;
	high = len;
	mid = (high + low) / 2;

	while (high >= low) {
		if (search_key2 > student[mid][0]) {
			low = mid + 1;
		}
		else if (search_key2 < student[mid][0]) {
			high = mid - 1;
		}
		else {
			return mid;
		}
		mid = (high + low) / 2;
	}
	return -1;
}