#include<stdio.h>
using namespace std;

int main()
{

	int nn = 0, i = 0;
	double sum = 0.0 , b = 1.0;

	printf("請輸入慾顯示數量\n");
	scanf_s("%d", &nn);

	while (i <= nn)
	{
		if (i % 2 == 0)
		{
			sum += (4 / b);
		}
		else {
			sum -= (4 / b);
		}
		i++;
		b += 2;
	}
	printf("%lf", sum*-1);
}
