/* �q��L��J�B�I�ƭ� */
#include <stdio.h>

// ��L��J����(����)�B�魫(����)�A�p��L�X�XBMI�ȥH�����絲�G(�L���B�зǡB�L�D�B�L�D)

int main(void)
{
    float h, w, bmi;
    printf("�п�J����(����)�M�魫(����)==>\n");
    scanf_s("%f %f", &h, &w);

    bmi = w / (h / 100) / (h / 100);
    if (bmi < 18.5 && bmi > 0) {
        printf("BMI��%f\n", bmi);
        printf("�L��\n");
    } else if(bmi >= 18.5 && bmi <= 24) {
        printf("BMI��%f\n", bmi);
        printf("�з�\n");
    } else if (bmi > 24 && bmi <= 27) {
        printf("BMI��%f\n", bmi);
        printf("�L�D\n");
    } else if (bmi > 27) {
        printf("BMI��%f\n", bmi);
        printf("�L�D\n");
    } else {
        printf("BMI��%f\n", bmi);
        printf("�X�F�I���D\n");
    }

    return 0;
}