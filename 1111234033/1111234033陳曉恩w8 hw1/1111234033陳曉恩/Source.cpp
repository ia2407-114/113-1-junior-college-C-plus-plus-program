#include <stdio.h>
#include <stdlib.h>
int rollDice(void);

int main(void)
{
    int ex;
    printf("請輸入實驗次數\n");
    scanf_s("%d", &ex);

    unsigned int frequency2 = 0; // rolled 2 counter
    unsigned int frequency3 = 0; // rolled 3 counter
    unsigned int frequency4 = 0; // rolled 4 counter
    unsigned int frequency5 = 0; // rolled 5 counter
    unsigned int frequency6 = 0; // rolled 6 counter
    unsigned int frequency7 = 0; 
    unsigned int frequency8 = 0;
    unsigned int frequency9 = 0;
    unsigned int frequency10 = 0;
    unsigned int frequency11 = 0;
    unsigned int frequency12 = 0;
    // loop 60000000 times and summarize results
    for (unsigned int roll = 1; roll <= ex; ++roll) {
        int face = rollDice(); // random number from 1 to 6

        // determine face value and increment appropriate counter
        switch (face) {

       
        case 2: // rolled 2
            ++frequency2;
            break;

        case 3: // rolled 3
            ++frequency3;
            break;

        case 4: // rolled 4
            ++frequency4;
            break;

        case 5: // rolled 5
            ++frequency5;
            break;

        case 6: // rolled 6
            ++frequency6;
            break; // optional
        case 7: // rolled 6
            ++frequency7;
            break; // optional
        case 8: // rolled 6
            ++frequency8;
            break; // optional
        case 9: // rolled 6
            ++frequency9;
        case 10: // rolled 6
            ++frequency10;
            break; // optional
        case 11: // rolled 6
            ++frequency11;
            break; // optional
        case 12: // rolled 6
            ++frequency12;
            break; // optional
        }
    }

    // display results in tabular format
    printf("%s%13s\n", "Face", "Frequency");

    printf("   2%13u\n", frequency2);
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


// roll dice, calculate sum and display results
int rollDice(void)
{
    int die1 = 1 + (rand() % 6); // pick random die1 value
    int die2 = 1 + (rand() % 6); // pick random die2 value

    // display results of this roll

    return die1 + die2; // return sum of dice
}
