/* 從鍵盤輸入值*/
#include<stdio.h>
#define PI 3.14

int main()
{
	double r,h = 0.0; /*宣告變數和指定初值0.0*/

	printf("請輸入半徑\n"); /*顯示提示字串*/
	scanf_s("%Lf", &r); /*輸入半徑*/
	printf("請輸入圓的高度\n"); /*顯示提示字串*/
	scanf_s("%Lf", &h); /*輸入高度*/


	printf("圓周長= %f\n", ((2 *r)* PI));
	printf("圓面積= %f\n", (r * r * PI));
	printf("圓柱體體積= %f\n", (r * r * PI) * h);
	printf("圓錐體體積= %f\n",  (r * r * PI) *1/3* h);
}