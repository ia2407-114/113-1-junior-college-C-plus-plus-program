#include<stdio.h>
using namespace std;
int play(int n);

int main()
{

	int nn = 0;

	printf("�п�J����ܶ��h\n");
	scanf_s("%d", &nn);
	int result = play(nn);
	printf("%d �����h�O: %d\n", nn, result);

	return 0;
}

int play(int n)
{
	int i;
	int sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}





