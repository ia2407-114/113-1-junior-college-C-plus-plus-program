//題目2.寫一個程式，輸入實驗次數ex，骰子的數量2，建立一個副程式，傳回擲骰子後的總點數。最後由主程式的陣列統計出各點出現的次數。
#include <stdio.h>
#include <stdlib.h>
int rollDice(void);
int main(void)
{
    int points[13] = { 0 }, roll;
    double ratio = 0.0, j;
    for (roll = 1; roll <= 60000000; ++roll)
    {
        points[rollDice()]++;
    }
    printf("%s%13s\n", "Face", "Frequency");
    for (roll = 2; roll < 13; roll++)
    {
        printf("%7d %13d      ", roll, points[roll]);
        ratio = points[roll] / 1000000;
        for (j = 1; j <= ratio; j++)
            printf("********");
        ratio = 0;
        printf("\n");
    }
}
   int rollDice(void) 
   {
       int die1 = 1 + (rand() % 6);
       int die2 = 1 + (rand() % 6);
       return die1 + die2;
   }