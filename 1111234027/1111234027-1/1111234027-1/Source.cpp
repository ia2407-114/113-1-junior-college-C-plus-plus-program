#include<stdio.h>
#define PI  3.1415
int main()

{
    double r,h = 0.0;
   
    printf("請輸入半徑==>\n");
    scanf_s("%lf", &r);
    printf("請輸入高==>\n");
    scanf_s("%lf", &h);


    printf("周長為:%f\n",r*2* PI);
    printf("面積為:%f\n", r *r* PI);
    printf("柱體體積:%f\n", r *r* PI*h);
    printf("錐形體積:%f\n", r * r*PI*1/3);


    return 0;   
}
