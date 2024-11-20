#include <stdio.h>
#include <stdlib.h>

int rollDice(void);
int main(void) {
    int points[13] = { 0 }, roll;
    int ratio = 0, j;
    for (roll = 1; roll <= 60000000; ++roll)
        points[rollDice()]++;

    printf("%s%13s\n", "Face", "Frequency");
    for (roll = 2; roll < 13; roll++) {
        printf("%7d%13d\n", roll, points[roll]); 
        ratio = points[roll] / 1000000;
        for (j = 1; j <= ratio; j++)
            printf("*");
        ratio = 0;
        printf("\n");
    }
    return 0; 
}
int rollDice(void) {
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    return die1 + die2;
}