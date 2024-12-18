#include <stdio.h>

int main()
{
	double price = 0.0;
	printf("請輸入浮點數值==>\n");
	scanf_s("%lf", &price);
	printf("變數price值是:%f\n", price * price);
	printf("變數price值是:%f\n", price * price * price);
	return 0;
}