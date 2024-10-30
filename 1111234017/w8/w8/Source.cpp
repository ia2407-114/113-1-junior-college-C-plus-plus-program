#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    unsigned int frequency1 = 0;
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

    // loop 600 times and summarize results
    for (unsigned int roll = 1; roll <= 600; ++roll) {
        int face = 1 + rand() % 6; // random number from 1 to 6

        // determine face value and increment appropriate counter
        switch (face) {

        case 1: // rolled 1
            ++frequency1;
            break;

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
        }
    }

    // display results in tabular format
    printf_s("%s%13s\n", "Face", "Frequency");
    printf_s("   1%13u\n", frequency1);
    printf_s("   2%13u\n", frequency2);
    printf_s("   3%13u\n", frequency3);
    printf_s("   4%13u\n", frequency4);
    printf_s("   5%13u\n", frequency5);
    printf_s("   6%13u\n", frequency6);
    printf_s("   7%13u\n", frequency1);
    printf_s("   8%13u\n", frequency2);
    printf_s("   9%13u\n", frequency3);
    printf_s("   10%13u\n", frequency4);
    printf_s("   11%13u\n", frequency5);
    printf_s("   12%13u\n", frequency6);
}


// roll dice, calculate sum and display results
int rollDice(void)
{
    int die1 = 1 + (rand() % 6); // pick random die1 value
    int die2 = 1 + (rand() % 6); // pick random die2 value

    // display results of this roll
    printf_s("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2; // return sum of dice
}