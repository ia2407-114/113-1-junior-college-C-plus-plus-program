#include <stdio.h>
#include <stdlib.h>

int rolldice(void);

int main(void)
{
	int roll = 0;
	int sum = 0;
int face[13] = { 0 };

printf("計算加總:\n");
scanf_s("%d", &sum);

for (roll = 0; roll <= sum; roll++)
{
	face[rolldice()]++;
}

printf("%s\n", "face", "Frequency");

int i = 1;
for (i = 2; i <= 12; i++)    /*第一個加總是2，最後是12*/
{
	printf("%d", i, face[i]);

    int j = 1;
    int stars = face[i] / 100000;
    for (j = 1; j <= stars; j++)
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
