#include <stdio.h>
#include <string.h>

// int linear(int search_key, int student[5][4], int len);
void avg_score(int student[5][4], int len);
void sort_score(int student[5][4], char* namesPtr[5], int len, int (*compare)(int score1, int score2));
int ascending(int score1, int score2);
int desending(int score1, int score2);
void swapPtr(char* Ptr1, char* Ptr2);


// a 1 60 20 b 2 50 30 c 3 90 30 d 4 40 50 e 5 10 60
void main(void)
{
	// student[學生人數][學號, 計概, 數學, 平均]
	int student[5][4] = { 0 };
	char* namesPtr[5];
	char names[5][10] = { "" };
	int i, j, search_key;

	for (i = 0; i < 5; i++)
	{
		printf("請輸入第%d位同學的姓名：", i + 1);
		scanf_s("%s", names[i], 10);
		// 將字串記憶體位置存到指標陣列
		namesPtr[i] = names[i];

		printf("請輸入第%d位同學的學號：", i + 1);
		scanf_s("%d", &student[i][0]);

		printf("請輸入第%d位同學的計概成績：", i + 1);
		scanf_s("%d", &student[i][1]);

		printf("請輸入第%d位同學的數學成績：", i + 1);
		scanf_s("%d", &student[i][2]);
	}

	avg_score(student, 5);

	sort_score(student, namesPtr, 5, desending);

	printf("\n%s%8s%8s%8s%8s\n", "姓名", "學號", "計概", "數學", "平均");

	for (i = 0; i < 5; i++)
	{
		printf("%s%10d%10d%10d%10d\n", namesPtr[i], student[i][0], student[i][1], student[i][2], student[i][3]);
	}



	//int result, search_key2;

	//printf("請輸入要搜尋的學生學號：");
	//scanf_s("%d", &search_key);

	//result = linear(search_key, student, 5);
	//if (result != -1) {
	//	printf("在陣列中第%d個\n", result);
	//	printf("\n%s%8s%8s%8s\n", "姓名", "學號", "計概", "數學");
	//	printf("%s%10d%10d%10d\n", names[result], student[result][0], student[result][1], student[result][2]);
	//}
	//else {
	//	printf("找不到此筆資料!");
	//}
}

/*
int linear(int search_key, int student[5][4], int len)
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
*/

void sort_score(int student[5][4], char* namesPtr[5], int len, int (*compare)(int score1, int score2))
{
	int i, j, temp;


	// 大次數
	for (i = 0; i < len - 1; i++)
	{
		// 找出最大的數值
		for (j = 0; j < len - i - 1; j++)
		{
			//if (student[j][3] > student[j + 1][3]) {
			if ((*compare)(student[j][3], student[j + 1][3])) {
			// 進到迴圈就代表是要交換
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

				// 平均
				temp = student[j][3];
				student[j][3] = student[j + 1][3];
				student[j + 1][3] = temp;

				// 姓名指標
				swapPtr(namesPtr[j], namesPtr[j + 1]);
			}
		}

	}
}



void avg_score(int student[5][4], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		student[i][3] = (student[i][1] + student[i][2]) / 2;
		// score[i] = student[i][3];
	}
}

void swapPtr(char* Ptr1, char* Ptr2)
{
	char* tempPtr;
	// 姓名指標
	tempPtr = Ptr1;
	Ptr1 = Ptr2;
	Ptr2 = tempPtr;
}


// True代表要變成由小到大(要進到迴圈代表原本的資料是前者較大)
// 遞增
int ascending(int score1, int score2)
{
	return score1 > score2;
}


// True代表要變成由大到小(要進到迴圈代表原本的資料是後者較大)
// 遞減
int desending(int score1, int score2)
{
	return score1 < score2;
}