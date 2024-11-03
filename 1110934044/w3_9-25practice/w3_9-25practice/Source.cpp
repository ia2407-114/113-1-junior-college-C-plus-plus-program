#include <stdio.h>
#define PI 3.1415926

int main() {
    double r = 0.0;  
    double h = 0.0;  

   
    printf("請輸入半徑==> \n");
    scanf_s("%lf", &r);
    printf("請輸入高度==> \n");
    scanf_s("%lf", &h);


    double c = 2 * PI * r;      
    double area = PI * r * r;          
    double cyli = area * h;
    double cone = (1.0 / 3.0) * area * h;

    printf("圓周長: %.2f\n", c);
    printf("圓面積: %.2f\n", area);
    printf("圓柱體體積: %.2f\n", cyli);  
    printf("圓錐體體積: %.2f\n", cone);
    return 0;
}
