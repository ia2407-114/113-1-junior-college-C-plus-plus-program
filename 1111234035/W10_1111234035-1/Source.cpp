#include<stdio.h>

double abc(int x,double y,int z);

int main() {
	int bj, year;
	double nll;
	printf("�s�h�ֿ�\n");
	scanf_s("%d",&bj);
	printf("�h�֧Q�v(�p��)\n");
	scanf_s("%lf", &nll);
	printf("�s�h�֦~\n");
	scanf_s("%d", &year);
	abc(bj, nll, year);
}

double abc(int x,double y,int z){
	int i;
	double money[999], benli[999];
	money[0] = x;
	for (i=1;i<=z;i++) {
		money[i] = money[i-1] * (y + 1);
		benli[i] = money[i] - money[i - 1];
	}
	for (i = 1; i <= z; i++) {
		printf("��%d�~�A�Q��%lf���A�s�ڦ@%lf��\n", i,benli[i], money[i]);
	}
	return 0;
}