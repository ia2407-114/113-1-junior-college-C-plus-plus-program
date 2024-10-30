
#include <stdio.h>
#include <stdlib.h>
int rollDice(void);
int main(void)
{
    int n;
    printf("¿é¤JN\n");
    scanf_s("%d\n", &n);
    printf("%d\n", n);

    unsigned int f2 = 0; // rolled 2 counter
    unsigned int f3 = 0; // rolled 3 counter
    unsigned int f4 = 0; // rolled 4 counter
    unsigned int f5 = 0; // rolled 5 counter
    unsigned int f6 = 0; // rolled 6 counter
    unsigned int f7 = 0;
    unsigned int f8 = 0;
    unsigned int f9 = 0;
    unsigned int f10 = 0;
    unsigned int f11 = 0;
    unsigned int f12 = 0;

    // loop 60000000 times and summarize results
    for (unsigned int roll = 1; roll <= n; ++roll) {
      //  int face = 1 + rand() % 12; // random number from 1 to 6
        int sum = rollDice();
        // determine face value and increment appropriate counter
        switch (sum) {

        case 2: // rolled 2
            ++f2;
            break;

        case 3: // rolled 3
            ++f3;
            break;

        case 4: // rolled 4
            ++f4;
            break;

        case 5: // rolled 5
            ++f5;
            break;

        case 6: // rolled 6
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

    // display results in tabular format
    printf("%s%13s\n", "Face", "Frequency");
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


// roll dice, calculate sum and display results
int rollDice(void)
{
    int die1 = 1 + (rand() % 6); // pick random die1 value
    int die2 = 1 + (rand() % 6); // pick random die2 value
    int sum = die1 + die2;
    return sum;
}