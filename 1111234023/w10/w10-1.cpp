#include <stdio.h>
int NJS(int,double);

int main(void)
{
	int money = 0;
	double years = 0.0;
	double sum[10] = {0.0};

	printf("��J����:  \n");
	scanf_s("%d", &money);
	printf("��J�~�Q�v:  \n");
	scanf_s("%d", &years);

	sum[0] = money;

   int	i = 0;
   for (i = 0;i <= 9; i++);
   {
	   sum[i] = NJS(sum[i], years);
	   printf("��%d�~�����Q�M:%d\n", i+1, sum[i]);
	   sum[i] = sum[i + 1];
   }

}

int NJS(int x, double y)
{
	double sum = 0.0;
	sum = (x * y) + x;
	return sum;
}
