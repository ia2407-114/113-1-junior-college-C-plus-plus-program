#include <stdio.h>
#include <stdlib.h>

int rollDice(void);

int main(void)
{
    int points[13] = { 0 };
    int roll, j;
    int ratio = 0;

    for (roll = 1; roll <= 60000000; ++roll) {
        points[rollDice()]++;
    }

    printf("%s%13s   %s\n", "Face", "Frequency", "star");

    for (int i = 2; i < 13; i++) {
        printf("%7d%13d   ", i, points[i]);

        ratio = points[i] / 1000000; 
        for (j = 1; j <= ratio; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int rollDice(void)
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);
    return die1 + die2;
}
