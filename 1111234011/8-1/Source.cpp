// Fig. 5.12: fig05_12.c
// Rolling a six-sided die 60,000,000 times.
#include <stdio.h>
#include <cstdlib>
#include <iostream>
using namespace std;

// roll dice, calculate sum and display results
int rollDice(void)
{
    int die1 = 1 + (rand() % 6); // pick random die1 value
    int die2 = 1 + (rand() % 6); // pick random die2 value

    // display results of this roll
    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2; // return sum of dice
}

int main(void)
{
    //    unsigned int frequency1 = 0; // rolled 1 counter
    //    unsigned int frequency2 = 0; // rolled 2 counter
    //    unsigned int frequency3 = 0; // rolled 3 counter
    //    unsigned int frequency4 = 0; // rolled 4 counter
    //    unsigned int frequency5 = 0; // rolled 5 counter
    //    unsigned int frequency6 = 0; // rolled 6 counter
    unsigned int roll;
    unsigned int frequency[13]; // rolled 0~12 counter
    int face;
    int i;
    int ex;

    //cout << "請輸入實驗次數 : ";
    //cin >> ex;
    printf("請輸入實驗次數 :");
    scanf_s("%d", &ex);
    //傳值
    //傳位址
    for (i = 0; i < 13; i++)
    {
        frequency[i] = 0;
    }

    // loop 60000000 times and summarize results
    for (roll = 1; roll <= ex; ++roll)
    {
        // random 2 number from 1 to 6
        face = rollDice();

        // determine face value and increment appropriate counter
        frequency[face]++;
    }

    //char str[10];
     // display results in tabular format
    //sprintf(str,"%s%13s\n", "Face", "Frequency");
    printf("%s%13s\n", "Sum", "Count");
    for (i = 2; i <= 12; i++)
    {
        printf("   %d %13u\n", i, frequency[i]);
    }





    /*
        // determine face value and increment appropriate counter
        switch (face) {

        case 1: // rolled 1
            ++frequency1;
            frequency[face];
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
    printf("%s%13s\n", "Face", "Frequency");
    printf("   1%13u\n", frequency1);
    printf("   2%13u\n", frequency2);
    printf("   3%13u\n", frequency3);
    printf("   4%13u\n", frequency4);
    printf("   5%13u\n", frequency5);
    printf("   6%13u\n", frequency6);
*/
}