#include <stdio.h>
#include <stdlib.h>

int rand_num();

/* �bmain()��ƩI�spower()��� */
int main()
{
    int ex, i, res;                  /* �ŧi�ܼ� */
    int f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0;

    printf("�п�J���禸��(ex)==> \n");   /* ��ܴ��ܦr�� */
    scanf_s("%d", &ex);                 /* ��J��ƭ� */

    for (i = 1; i <= ex; i++) {
        res = rand_num();

        switch (res) {
        case 2:
            f2++;
            break;
        case 3:
            f3++;
            break;
        case 4:
            f4++;
            break;
        case 5:
            f5++;
            break;
        case 6:
            f6++;
            break;
        case 7:
            f7++;
            break;
        case 8:
            f8++;
            break;
        case 9:
            f9++;
            break;
        case 10:
            f10++;
            break;
        case 11:
            f11++;
            break;
        case 12:
            f12++;
            break;
        }
    }


    printf("�`�M��2������: %d\n", f2);
    printf("�`�M��3������: %d\n", f3);
    printf("�`�M��4������: %d\n", f4);
    printf("�`�M��5������: %d\n", f5);
    printf("�`�M��6������: %d\n", f6);
    printf("�`�M��7������: %d\n", f7);
    printf("�`�M��8������: %d\n", f8);
    printf("�`�M��9������: %d\n", f9);
    printf("�`�M��10������: %d\n", f10);
    printf("�`�M��11������: %d\n", f11);
    printf("�`�M��12������: %d\n", f12);

    return 0;
}


/* power()��ƪ��w�q */
int rand_num() {
    int num1, num2, sum;
    num1 = rand() % 6 + 1;
    num2 = rand() % 6 + 1;
    
    sum = num1 + num2;

    return sum;
}