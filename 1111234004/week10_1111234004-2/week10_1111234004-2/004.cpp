/*�D��2. �ק�H�U�{���A��J���禸��ex�A���w��l���ƶq2�A
�إߤ@�ӰƵ{���A�Ǧ^�Y��l�᪺�`�I�ơC
�̫�ѥD�{�����}�C�έp�X�U�I�X�{�����ơC*/
// Fig. 5.12: fig05_12.c
// Rolling a six-sided die 60,000,000 times.
#include <stdio.h>
#include <stdlib.h>
int rollDice(void);

int main(void)
{
    int points[13] = { 0 }, roll; //�t�d�s��C���I�ƥX�{���W�v
    int ratio = 0, j;
    // loop 60000000 times and summarize results
    for (roll = 1; roll <= 60000000; ++roll)
        points[rollDice()]++;
    // display results in tabular format
    printf("%s%13s\n", "Face", "Frequency");

    for (roll = 2; roll < 13; ++roll) 
    {
        printf("%7d %13d    ", roll, points[roll]);
        ratio = points[roll] / 100000;
        for ( j = 1; j <= ratio; j++)
            printf("*");
        ratio = 0;
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