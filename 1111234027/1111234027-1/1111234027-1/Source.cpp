#include<stdio.h>
#define PI  3.1415
int main()

{
    double r,h = 0.0;
   
    printf("�п�J�b�|==>\n");
    scanf_s("%lf", &r);
    printf("�п�J��==>\n");
    scanf_s("%lf", &h);


    printf("�P����:%f\n",r*2* PI);
    printf("���n��:%f\n", r *r* PI);
    printf("�W����n:%f\n", r *r* PI*h);
    printf("�@����n:%f\n", r * r*PI*1/3);


    return 0;   
}
