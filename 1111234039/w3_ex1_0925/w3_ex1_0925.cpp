/* �q��L��J�B�I�ƭ� */
#include <stdio.h>
#define PI 3.1415
int main()
{
    double r = 0.0;  /* �ŧi�B�I�ܼ�price�M���w���0.0 */
    double h = 0.0;

    printf("�п�J�b�|��==> \n");  /* ��ܴ��ܦr�� */
    printf("�п�J����==> \n");
    scanf_s("%lf", & r);            /* ��J�B�I�ƭ� */
    scanf_s("%lf", & h);
                         /* ��X�ܼ�price���� */
    printf("��P���O: %f\n", (r * 2 * PI));   /*�p���P��*/
    printf("�ꭱ�n�O: %f\n", (r * r * PI));  /*�p��ꭱ�n*/
    printf("��W����n�O: %f\n", (r *r * h * PI));  /*�p���W����n*/
    printf("���@����n�O: %f\n", ( r * r * h * PI)/3);  /*�p����@����n*/
    return 0;
}