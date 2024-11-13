/*題目2. 修改以下程式，輸入實驗次數ex，給定骰子的數量2，
建立一個副程式，傳回擲骰子後的總點數。
最後由主程式的陣列統計出各點出現的次數。*/
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