#include <stdio.h>
double avg_score(int stu[4][5], char names[5][10], int len);

int main(void) {
	int stu[4][5] = { 0 };
	char names[5][10];
	int i;
	int len = 5;
	for (i = 0; i < len; i++) {
		printf("學生%d:\n", i + 1);
		printf("輸入學號");
		scanf_s("%d", &stu[0][i]);
		printf("輸入計概成績");
		scanf_s("%d", &stu[1][i]);
		printf("輸入數學成績");
		scanf_s("%d", &stu[2][i]);
		printf("輸入名字");
		scanf_s("%s", names[i], 10);
	}
	double avg = avg_score(stu,names, len);
	printf("總平均: %lf", avg);
}

double avg_score(int stu[4][5], char names[5][10], int len) {
	int i;
	len = 5;
	int avg = 0;
	for (i = 0; i < len; i++) {
		stu[3][i] = (stu[1][i] + stu[2][i]) / 2;
		avg += stu[3][i];
	}
	avg = avg / 5;
	printf("姓名\t學號\t計概\t數學\t平均\n");
	for (i = 0; i < len; i++) {
		printf("%s\t%d\t%d\t%d\t%d\n",names[i], stu[0][i], stu[1][i], stu[2][i], stu[3][i]);
	}
	return avg;
}
