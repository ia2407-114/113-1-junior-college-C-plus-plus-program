/*題目2. 修改以下程式，輸入實驗次數ex，給定骰子的數量2，
建立一個副程式，傳回擲骰子後的總點數。
最後由主程式的陣列統計出各點出現的次數。*/
// Fig. 5.12: fig05_12.c
// Rolling a six-sided die 60,000,000 times.
#include <stdio.h>
#include <stdlib.h>
int rollDice(void);

int main(void)
{
    int points[13] = { 0 }, roll; //負責存放每種點數出現的頻率
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