#include <stdio.h>
#define PI 3.1415926

int main() {
    double r = 0.0;  
    double h = 0.0;  

   
    printf("�п�J�b�|==> \n");
    scanf_s("%lf", &r);
    printf("�п�J����==> \n");
    scanf_s("%lf", &h);


    double c = 2 * PI * r;      
    double area = PI * r * r;          
    double cyli = area * h;
    double cone = (1.0 / 3.0) * area * h;

    printf("��P��: %.2f\n", c);
    printf("�ꭱ�n: %.2f\n", area);
    printf("��W����n: %.2f\n", cyli);  
    printf("���@����n: %.2f\n", cone);
    return 0;
}
