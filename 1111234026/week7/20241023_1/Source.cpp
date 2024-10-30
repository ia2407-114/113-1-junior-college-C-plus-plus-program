#include<stdio.h>
using namespace std;

int main()
{

	int nn = 0, i=0 ;
	double sum = 1.0, b = 1.0;

	printf("請輸入慾顯示數量\n");
	scanf_s("%d", &nn);

	for (i = 1; i <= nn; i++)
	{
		b *= i;
		sum += 1.0 / b;
	}
	printf("結果:%lf/n", sum);
	return sum;
}



