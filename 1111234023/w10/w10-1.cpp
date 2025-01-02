#include <stdio.h>
int NJS(int,double);

int main(void)
{
	int money = 0;
	double years = 0.0;
	double sum[10] = {0.0};

	printf("輸入本金:  \n");
	scanf_s("%d", &money);
	printf("輸入年利率:  \n");
	scanf_s("%d", &years);

	sum[0] = money;

   int	i = 0;
   for (i = 0;i <= 9; i++);
   {
	   sum[i] = NJS(sum[i], years);
	   printf("第%d年的本利和:%d\n", i+1, sum[i]);
	   sum[i] = sum[i + 1];
   }

}

int NJS(int x, double y)
{
	double sum = 0.0;
	sum = (x * y) + x;
	return sum;
}
