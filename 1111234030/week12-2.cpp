#include <stdio.h>
#include <string.h>
double sort_score(int stu[4][5], char names[5][10], int len);

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
	double avg = sort_score(stu, names, len);
	printf("�`����: %lf\n", avg);
	printf("�Ƨǫ�:\n");
	printf("�m�W\t�Ǹ�\t�p��\t�ƾ�\t����\n");
	for (i = 0; i < len; i++) {
		printf("%s\t%d\t%d\t%d\t%d\n", names[i], stu[0][i], stu[1][i], stu[2][i], stu[3][i]);
	}
	printf("�����: %lf");
}



	double sort_score(int stu[4][5], char names[5][10], int len) {
	int i, j,temp;
	char tmp[10];
	len = 5;
	int avg = 0;
	for (i = 0; i < len; i++) {
		stu[3][i] = (stu[1][i] + stu[2][i]) / 2;
		avg += stu[3][i];
	}
	avg = avg / 5;
	printf("�Ƨǫe:\n");
	printf("�m�W\t�Ǹ�\t�p��\t�ƾ�\t����\n");
	for (i = 0; i < len; i++) {
		printf("%s\t%d\t%d\t%d\t%d\n", names[i], stu[0][i], stu[1][i], stu[2][i], stu[3][i]);
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++)
			if (stu[3][j] > stu[3][j + 1]) {
				temp = stu[0][j];
				stu[0][j] = stu[0][j + 1];
				stu[0][j + 1] = temp;
				temp = stu[1][j];
				stu[1][j] = stu[1][j + 1];
				stu[1][j + 1] = temp;
				temp = stu[2][j];
				stu[2][j] = stu[2][j + 1];
				stu[2][j + 1] = temp;
				temp = stu[1][j];
				stu[3][j] = stu[3][j + 1];
				stu[3][j + 1] = temp;
				strcpy_s(tmp, names[j]);
				strcpy_s(names[j], names[j+1]);
				strcpy_s(names[j+1], tmp);
			}
	}
	return stu[3][len/2];
}
