/* �q��L��J�B�I�ƭ� */
#include <stdio.h>

// ��L��J����(����)�B�魫(����)�A�p��L�X�XBMI�ȥH�����絲�G(�L���B�зǡB�L�D�B�L�D)

int main(void)
{
    float h, w, bmi;
    printf("�п�J����(����)�M�魫(����)==>\n");
    scanf_s("%f %f", &h, &w);

    bmi = w / (h / 100) / (h / 100);

    if (bmi >= 35) {
        printf("BMI��%f\n", bmi);
        printf("���תέD\n");
    }
    else {
        if (bmi >= 30) {
            printf("BMI��%f\n", bmi);
            printf("���תέD\n");
        }
        else {
            if (bmi >= 27) {
                printf("BMI��%f\n", bmi);
                printf("���תέD\n");
            }
            else {
                if (bmi >= 24) {
                    printf("BMI��%f\n", bmi);
                    printf("�魫�L��\n");
                }
                else {
                    if (bmi < 18.5) {
                        printf("BMI��%f\n", bmi);
                        printf("�魫�L��\n");
                    }
                    else {
                        printf("BMI��%f\n", bmi);
                        printf("���`�d��\n");
                    }
                }
            }
        }
    }

    return 0;
}