#include <stdio.h>
double avg_score(int stu[4][5], char names[5][10], int len);

int main(void) {
	int stu[4][5] = { 0 };
	char names[5][10];
	int i;
	int len = 5;
	for (i = 0; i < len; i++) {
		printf("�ǥ�%d:\n", i + 1);
		printf("��J�Ǹ�");
		scanf_s("%d", &stu[0][i]);
		printf("��J�p�����Z");
		scanf_s("%d", &stu[1][i]);
		printf("��J�ƾǦ��Z");
		scanf_s("%d", &stu[2][i]);
		printf("��J�W�r");
		scanf_s("%s", names[i], 10);
	}
	double avg = avg_score(stu,names, len);
	printf("�`����: %lf", avg);
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
	printf("�m�W\t�Ǹ�\t�p��\t�ƾ�\t����\n");
	for (i = 0; i < len; i++) {
		printf("%s\t%d\t%d\t%d\t%d\n",names[i], stu[0][i], stu[1][i], stu[2][i], stu[3][i]);
	}
	return avg;
}
