#include <stdio.h>
#include <stdlib.h>
int rollDice(void);
int main(void) {
    int points[13] = { 0 },roll;
    for (roll = 1; roll <= 60000000; roll++) {
        points[rollDice()]++; 
    }
    printf("%s%13s\n", "face", "frequency");
    for (int roll = 2; roll <13; roll++) {
        printf("%7d%13d", roll, points[roll]);
        for (int j = 0; j <= points[roll]/200000;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int rollDice(void) {
    int die1 = 1 + (rand() % 6); 
    int die2 = 1 + (rand() % 6); 
    return die1 + die2; 
}