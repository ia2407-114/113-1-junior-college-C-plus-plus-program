#include<stdio.h>

int main()
{
	int max;
	int p = 0;

	int i = 0;
	double pi = 0.0;
	printf("請輸入整數\n");
	scanf_s("%d", &max);
	
		for (int j = 1; j <= max; j += 2)
		{
			if (p == 0)
			{
				pi +=(4.0 / j);
				p = 1;
			}
			else
			{
				pi =pi- (4.0 / j);
				p = 0;
			}
		
		}
		printf("%lf", pi);
}