/* �q��L��J�B�I�ƭ� */
#include <stdio.h>

int main()
{
    double cm = 0.0;  /* �ŧi�B�I�ܼ�price�M���w���0.0 */
    double kg = 0.0;
    double bmi = 0.0;
    printf("�п�J����(����)==> \n");  /* ��ܴ��ܦr�� */
    printf("�п�J�魫(����)==> \n");
    scanf_s("%lf", &cm);            /* ��J�B�I�ƭ� */
    scanf_s("%lf", &kg);
    /* ��X�ܼ�price���� */
    bmi = kg / ((cm / 100) * (cm / 100));
    printf("BMI�O: %f\n", bmi);   /*�p��BMI*/

    if ((bmi < 18.5) && (bmi > 0))
    {
        printf("�魫�L��");
    }
    else if ((bmi >= 18.5) && (bmi <= 24))
    {
        printf("�魫�з�");
    }
    else if ((bmi >= 24) && (bmi <= 27))
    {
        printf("�魫�L�D");
    }
    else if (bmi > 27)
    {
        printf("�魫�L�D");
    }
    
    return 0;
}