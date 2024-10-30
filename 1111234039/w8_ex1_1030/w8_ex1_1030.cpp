#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ex = 1;
    unsigned int frequency2 = 0;
    unsigned int frequency3 = 0;
    unsigned int frequency4 = 0;
    unsigned int frequency5 = 0;
    unsigned int frequency6 = 0;
    unsigned int frequency7 = 0;
    unsigned int frequency8 = 0;
    unsigned int frequency9 = 0;
    unsigned int frequency10 = 0;
    unsigned int frequency11 = 0;
    unsigned int frequency12 = 0;

    printf("請輸入項目數量: ");
    scanf_s("%d", &ex);

    for (unsigned int roll = 1; roll <= ex; ++roll) {
        int face = 1 + rand() % 12;

        switch (face) {

        case 2:
            ++frequency2;
            break;

        case 3:
            ++frequency3;
            break;

        case 4:
            ++frequency4;
            break;

        case 5:
            ++frequency5;
            break;

        case 6:
            ++frequency6;
            break;

        case 7:
            ++frequency7;
            break;
        case 8:
            ++frequency8;
            break;

        case 9:
            ++frequency9;
            break;

        case 10:
            ++frequency10;
            break;

        case 11:
            ++frequency11;
            break;

        case 12:
            ++frequency12;
            break;


        }
    }


    printf("%s%13s\n", "Face", "Frequency");
    printf("  2%13u\n", frequency2);
    printf("   3%13u\n", frequency3);
    printf("   4%13u\n", frequency4);
    printf("   5%13u\n", frequency5);
    printf("   6%13u\n", frequency6);
    printf("   7%13u\n", frequency7);
    printf("   8%13u\n", frequency8);
    printf("   9%13u\n", frequency9);
    printf("   10%13u\n", frequency10);
    printf("   11%13u\n", frequency11);
    printf("   12%13u\n", frequency12);

}



int rollDice(void)
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);


    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}