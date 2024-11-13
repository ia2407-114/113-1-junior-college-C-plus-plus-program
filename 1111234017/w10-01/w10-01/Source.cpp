#include <stdio.h>
#include <stdlib.h>
int rollDice(void);
int main(void)
{
    int ex;
    scanf_s("%d", &ex);
    int point[13] = { 0 };
    for (int roll = 1; roll <= ex; roll++)
        point[rollDice()]++;
    printf("%s %13s\n", "Face", "Ferquency");
    for (int i = 2; i < 13; i++)
    {
        printf("%7d%13d   ", i, point[i]);
        for (int j = 0; j <= point[i] / 100000; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int rollDice(void)
{
    int die1 = 1 + (rand() % 6); // pick random die1 value
    int die2 = 1 + (rand() % 6); // pick random die2 value   
    return die1 + die2; // return sum of dice
}