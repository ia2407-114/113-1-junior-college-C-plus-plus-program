#include <stdio.h>
#define PI 3.1415
int main()
{
    double r = 0.0;  /* �ŧi�B�I�ܼ�price�M���w���0.0 */
    double h = 0.0;

    printf("�п�J�b�|��==> \n");  /* ��ܴ��ܦr�� */
    printf("�п�J����==> \n");
    scanf_s("%lf", &r);            /* ��J�B�I�ƭ� */
    scanf_s("%lf", &h);
    /* ��X�ܼ�price���� */
    printf("��P���O: %f\n", (r * 2 * PI));   
    printf("�ꭱ�n�O: %f\n", (r * r * PI));  
    printf("��W����n�O: %f\n", (r * r * h * PI));  
    printf("���@����n�O: %f\n", (r * r * h * PI) / 3);  
    return 0;
}