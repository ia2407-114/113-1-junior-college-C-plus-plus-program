#include<stdio.h>

int avg_score(int score[5][5]);

int main() {
	int i;
	int score[5][5];
	for (i = 0; i <= 4; i++) {
		printf("�п�J�Ǹ�\n");
		scanf_s("%d", &score[0][i]);
		printf("�п�J�p�����Z\n");
		scanf_s("%d", &score[1][i]);
		printf("�п�J�ƾǦ��Z\n");
		scanf_s("%d", &score[2][i]);
	}
	avg_score(score);
	printf("�Ǹ�\t�p��\t�ƾ�\t����\n");
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