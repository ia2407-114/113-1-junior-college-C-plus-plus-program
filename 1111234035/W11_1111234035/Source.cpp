#include<stdio.h>

int avg_score(int score[5][5]);

int main() {
	int i;
	int score[5][5];
	for (i = 0; i <= 4; i++) {
		printf("請輸入學號\n");
		scanf_s("%d", &score[0][i]);
		printf("請輸入計概成績\n");
		scanf_s("%d", &score[1][i]);
		printf("請輸入數學成績\n");
		scanf_s("%d", &score[2][i]);
	}
	avg_score(score);
	printf("學號\t計概\t數學\t平均\n");
	for (i = 0; i <= 4; i++) {
		printf("%d\t", score[0][i]);
		printf("%d\t", score[1][i]);
		printf("%d\t", score[2][i]);
		printf("%d\n", score[3][i]);
	}
}

int avg_score(int score[5][5]) {
	float avg,sum;
	int i;
	for (i = 0; i <= 4; i++) {
		avg = 0;
		sum = score[1][i] + score[2][i];
			score[3][i] = sum / 2;
	}
	return 0;
}