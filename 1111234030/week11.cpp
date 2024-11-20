#include <stdio.h>
double avg_score(int stu[4][5],int len);

int main(void) {
	int stu[4][5] = {0};
	int i;
	int len = 5;
	for (i = 0; i < len; i++) {
		printf("輸入學號");
		scanf_s("%d", &stu[0][i]);
		printf("輸入計概成績");
		scanf_s("%d", &stu[1][i]);
		printf("輸入數學成績");
		scanf_s("%d", &stu[2][i]);
	}
	double avg = avg_score(stu, len);
	printf("學號\t計概\t數學\t平均\n");
	for (i = 0; i < len; i++) {
		printf("%d\t%d\t%d\t%d\n", stu[0][i], stu[1][i], stu[2][i], stu[3][i]);
	}
	printf("%lf", avg);
}

double avg_score(int stu[4][5],int len) {
	int i;
	len = 5;
	int avg = 0;
	for (i = 0; i < len; i++) {
		stu[3][i] = (stu[1][i] + stu[2][i]) / 2;
		avg += stu[3][i];
	}
	avg = avg / 5;
	return avg;
}
