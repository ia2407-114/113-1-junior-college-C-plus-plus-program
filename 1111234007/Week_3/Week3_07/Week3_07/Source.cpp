#include  <stdio.h>
#define PI 3.14
int main()
{
	double h,r =0.0;
    printf("請輸入半徑==>\n " );
	scanf_s("%lf", & r);
	printf("請輸入高度==>\n ");
	scanf_s("%lf", & h);

	printf("圓的周長是:%f\n",((2*r)*PI));
	printf("圓的面積是:%f\n",(r*r*PI));
	printf("圓柱體體積是:%f\n", (r*r*PI)*h);
	printf("圓錐體體積是:%f\n", (r*r*PI)*1/3*h);
}