#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);

int main(void)
{
    int points[13] = { 0 }, roll;
    int ratio = 0, j;
    long long numRolls;

    srand(time(NULL));

    printf("請輸入擲骰子的次數：");
    scanf_s("%lld", &numRolls);

    for (roll = 1; roll <= numRolls; ++roll)
        points[rollDice()]++;

    printf("%s%13s\n", "點數", "次數");
    for (roll = 2; roll < 13; roll++)
    {
        printf("%7d %13d ", roll, points[roll]);

        ratio = points[roll] / 1000000;
        for (j = 1; j <= ratio; j++) {
            printf("#");
            return 0;
        }
        printf("\n");
    }

    return 0;
}
int rollDice(void)      
{
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}
