#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[20];
	int id, math, comput;
	float avg;
} stu;

void sort_score(stu my_class[5], int len);
void printScore(stu my_class[5], int len);

// int linear(int search_key, int student[5][4], int len);
// void avg_score(int student[5][4], int len);
// int ascending(int score1, int score2);
// int desending(int score1, int score2);
// void swapPtr(char* Ptr1, char* Ptr2);


// a 1 60 20 b 2 10 30 c 3 90 30 d 4 40 50 e 5 10 60
void main(void)
{
	// student[學生人數][學號, 計概, 數學, 平均]
	stu my_class[5];
	int i, j, search_key;

	for (i = 0; i < 5; i++)
	{
		printf("請輸入第%d位同學的姓名：", i + 1);
		scanf_s("%s", my_class[i].name, 10);
		// 將字串記憶體位置存到指標陣列

		printf("請輸入第%d位同學的學號：", i + 1);
		scanf_s("%d", &my_class[i].id);

		printf("請輸入第%d位同學的數學成績：", i + 1);
		scanf_s("%d", &my_class[i].math);

		printf("請輸入第%d位同學的電腦成績：", i + 1);
		scanf_s("%d", &my_class[i].comput);

		my_class[i].avg = (float)(my_class[i].math + my_class[i].comput) / 2;
	}

	printScore(my_class, 5);

	sort_score(my_class, 5);

	printScore(my_class, 5);



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


void printScore(stu my_class[5], int len)
{
	int i;
	printf("\n%s%8s%8s%8s%8s\n", "姓名", "學號", "數學", "電腦", "平均");

	for (i = 0; i < 5; i++)
	{
		printf("%s%10d%10d%8d	%f\n", my_class[i].name, my_class[i].id, my_class[i].math, my_class[i].comput, my_class[i].avg);
	}
}

void sort_score(stu my_class[5], int len)
{
	int i, j;
	stu temp;


	// 大次數
	for (i = 0; i < len - 1; i++)
	{
		// 找出最小的數值
		for (j = 0; j < len - i - 1; j++)
		{
			if (my_class[j].avg < my_class[j + 1].avg) {
				// 進到迴圈就代表是要交換
				temp = my_class[j];
				my_class[j] = my_class[j + 1];
				my_class[j + 1] = temp;
			}
		}

	}
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
*/