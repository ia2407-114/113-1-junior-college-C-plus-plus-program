#include <stdio.h>
#include <stdlib.h>

int rollDice(void);

int main(void)
{
    int roll = 0;
    int sum = 0;
    int face[13] = { 0 };

    printf("請輸入實驗次數:(建議60,000,000)\n");
    scanf_s("%d", &sum);

    for (roll = 0; roll <= sum; ++roll) 
    {
        face[rollDice()]++;
    }

    printf("%s%13s\n", "Face", "Frequency");
    int i = 1;
    for (i=2;i<=12;i++)
    {
        printf("   %d%13u",i,face[i]);

        int j = 1;
        int stars = face[i] / 100000;
        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


// roll dice, calculate sum and display results
int rollDice(void)
{
    int die1 = 1 + (rand() % 6); // pick random die1 value
    int die2 = 1 + (rand() % 6); // pick random die2 value

    return die1 + die2; // return sum of dice
}