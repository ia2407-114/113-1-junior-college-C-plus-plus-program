#include <stdio.h>
#include <stdlib.h>
int Dice();
 
int main(void)
{
    unsigned int f2 = 0;
    unsigned int f3 = 0; 
    unsigned int f4 = 0; 
    unsigned int f5 = 0; 
    unsigned int f6 = 0;
    unsigned int f7 = 0;
    unsigned int f8 = 0;
    unsigned int f9 = 0;
    unsigned int f10 = 0;
    unsigned int f11 = 0;
    unsigned int f12 = 0;
    int ex;
    scanf_s("%d", &ex);

    for (unsigned int roll = 1; roll <= ex; ++roll) {
        int face = Dice();

        switch (face) {

        case 2:
            ++f2;
            break;

        case 3: 
            ++f3;
            break;

        case 4:
            ++f4;
            break;

        case 5: 
            ++f5;
            break;

        case 6:
            ++f6;
            break;

        case 7:
            ++f7;
            break;

        case 8:
            ++f8;
            break;

        case 9:
            ++f9;
            break;

        case 10:
            ++f10;
            break;

        case 11:
            ++f11;
            break;

        case 12:
            ++f12;
            break;
        }
    }

    printf("%s%13s\n", "Face", "f");
    printf("   2%13u\n", f2);
    printf("   3%13u\n", f3);
    printf("   4%13u\n", f4);
    printf("   5%13u\n", f5);
    printf("   6%13u\n", f6);
    printf("   7%13u\n", f7);
    printf("   8%13u\n", f8);
    printf("   9%13u\n", f9);
    printf("   10%13u\n", f10);
    printf("   11%13u\n", f11);
    printf("   12%13u\n", f12);
}


int Dice()
{
    int die1 = 1 + (rand() % 6); 
    int die2 = 1 + (rand() % 6); 

    //printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}
