/* 從鍵盤輸入浮點值*/
#include <stdio.h>

int main()
{
	double price = 0.0; /*宣告浮點變數和指定初值0.0*/

	printf("請輸入浮點數值==>\n"); /*顯示提示字串*/
	scanf_s("%lf", &price); /*輸入浮點數值*/
	/*輸出變數 price的值*/

	printf("變數price的平方值是:%f\n", (price*price ));

	return 0;

}