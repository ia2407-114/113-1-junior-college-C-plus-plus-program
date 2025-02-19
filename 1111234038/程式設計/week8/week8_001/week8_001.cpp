#include <stdio.h>
#include <stdlib.h>

int rand_num();

/* main()ㄧ计㊣power()ㄧ计 */
int main()
{
    int ex, i, res;                  /* 跑计 */
    int f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0;

    printf("叫块龟喷Ω计(ex)==> \n");   /* 陪ボ矗ボ﹃ */
    scanf_s("%d", &ex);                 /* 块俱计 */

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


    printf("羆㎝2Ω计: %d\n", f2);
    printf("羆㎝3Ω计: %d\n", f3);
    printf("羆㎝4Ω计: %d\n", f4);
    printf("羆㎝5Ω计: %d\n", f5);
    printf("羆㎝6Ω计: %d\n", f6);
    printf("羆㎝7Ω计: %d\n", f7);
    printf("羆㎝8Ω计: %d\n", f8);
    printf("羆㎝9Ω计: %d\n", f9);
    printf("羆㎝10Ω计: %d\n", f10);
    printf("羆㎝11Ω计: %d\n", f11);
    printf("羆㎝12Ω计: %d\n", f12);

    return 0;
}


/* power()ㄧ计﹚竡 */
int rand_num() {
    int num1, num2, sum;
    num1 = rand() % 6 + 1;
    num2 = rand() % 6 + 1;
    
    sum = num1 + num2;

    return sum;
}