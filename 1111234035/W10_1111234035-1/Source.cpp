#include<stdio.h>

double abc(int x,double y,int z);

int main() {
	int bj, year;
	double nll;
	printf("存多少錢\n");
	scanf_s("%d",&bj);
	printf("多少利率(小數)\n");
	scanf_s("%lf", &nll);
	printf("存多少年\n");
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
		printf("第%d年，利息%lf元，存款共%lf元\n", i,benli[i], money[i]);
	}
	return 0;
}