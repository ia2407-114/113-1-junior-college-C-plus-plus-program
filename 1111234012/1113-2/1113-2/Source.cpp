#include <stdio.h>
#include <stdlib.h>
int rollDice(void);
int main(void)
{
    int point[13] = { 0 };
    for (int roll = 1; roll <= 60000000; roll++)
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
    int die1 = 1 + (rand() % 6); 
    int die2 = 1 + (rand() % 6);    
    return die1 + die2;
}