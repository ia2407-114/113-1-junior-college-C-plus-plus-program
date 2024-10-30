#include<stdio.h>
using namespace std;
int play(int n);

int main()
{

	int nn = 0;

	printf("請輸入慾顯示階層\n");
	scanf_s("%d", &nn);
	int result = play(nn);
	printf("%d 的階層是: %d\n", nn, result);

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





