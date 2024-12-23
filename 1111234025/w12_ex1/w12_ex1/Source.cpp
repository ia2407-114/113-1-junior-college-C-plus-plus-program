#include <stdio.h>

double avg_score(int student[5][4], char names[5][10], int len);

void main(void)
{
	int student[5][4] = { 0 };
	char names[5][10];
	int i;
	double average = 0.0;

	for (i = 0; i < 5; i++)
	{
		printf("請輸入第%d位同學的學號：", i + 1);
		scanf_s("%d", &student[i][0]);

		printf("請輸入第%d位同學的計概成績：", i + 1);
		scanf_s("%d", &student[i][1]);

		printf("請輸入第%d位同學的數學成績：", i + 1);
		scanf_s("%d", &student[i][2]);
		printf("請輸入第%d位同學的姓名：", i + 1);
		scanf_s("%s", names[i], 10);
	}

	average = avg_score(student, names, 5);


	printf("\n%s%8s%8s%8s%8s\n", "姓名", "學號", "計概", "數學", "平均");

	for (i = 0; i < 5; i++)
	{
		printf("%s%8d%10d%10d%10d\n", names[i], student[i][0], student[i][1], student[i][2], student[i][3]);
	}

	printf("班級平均：%lf\n", average);

}

double avg_score(int student[5][4], char names[5][10], int len)
{
	int i;
	double total = 0.0;
	for (i = 0; i < len; i++)
	{
		student[i][3] = (student[i][1] + student[i][2]) / 2;
		total += student[i][3];
	}

	return (total / len);
}