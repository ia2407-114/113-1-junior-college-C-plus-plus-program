#include<stdio.h>
using namespace std;

int main()
{

	int nn = 0 , i=1;

	printf("請輸入慾顯示數量\n");
	scanf_s("%d", &nn);

	while (i <= nn)
	{	
		printf("%d\t%d\n" ,i ,i*i);
		i++;
	} 
	return 0;
}
