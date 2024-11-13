/*�D��2. �ק�H�U�{���A��J���禸��ex�A���w��l���ƶq2�A
�إߤ@�ӰƵ{���A�Ǧ^�Y��l�᪺�`�I�ơC
�̫�ѥD�{�����}�C�έp�X�U�I�X�{�����ơC*/
// Fig. 5.12: fig05_12.c
// Rolling a six-sided die 60,000,000 times.
#include <stdio.h>
#include <stdlib.h>
int Dice(void);

int main(void)
{
    int point[13] = { 0 }, roll, i;

    // loop 60000000 times and summarize results
    for (roll = 1; roll <= 60000000; ++roll) {
        point[Dice()]++;
    }

    // display results in tabular format
    printf("%s%13s\n", "point", "Frequency");
    for (i = 1; i <= 13; i++); {
        printf("%d\n", point[Dice()]);

    }
}


int Dice(void)
{
    int die1 = 1 + (rand() % 6); // pick random die1 value
    int die2 = 1 + (rand() % 6); // pick random die2 value

    return die1 + die2; // return sum of dice
}