#include <stdio.h>
int nnn(int,double,int);

int main() {
	int bj, year;
	double nll;
	int st[11] = { 0 };
	printf("�s�h�ֿ�");
	scanf_s("%d", &bj);
	printf("�~�Q�v�h��");
	scanf_s("%lf", &nll);
	printf("�X�~");
	scanf_s("%d", &year);
	//printf("%d\n",nnn(bj, nll, year));

}


int nnn(int x, double y, int z) {
	int i;
	int st[10] = {0};
		for(i = 1; i <= z; i++) {
			x = x * (1 + y);
		//	printf("%d\n", x);
		}
		for (i = 1; i < 10; i++) {
			st[i] = x;
			printf("%d", st[i]);
		}
		return x;
}
