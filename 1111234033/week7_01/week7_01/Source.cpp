#include<stdio.h>
int main() {
	int n, i;
	double e = 1.0, j = 1.0;
	printf("�п�J�@�Ӿ��");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		j *= i;
		e += 1.0/ j;
	}
	printf("e������Ȭ�:%lf",e);
	
	 
}