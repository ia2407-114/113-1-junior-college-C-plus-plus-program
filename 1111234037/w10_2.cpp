#include <stdio.h>
#include <stdlib.h>

int rollDice(void); // 函數宣告

int main(void) {
    int points[13] = { 0 }, roll;
    int ratio = 0, j;
    // 計算擲骰子的頻率
    for (roll = 1; roll <= 60000000; ++roll)
        points[rollDice()]++;

    // 輸出結果
    printf("%s%13s\n", "Face", "Frequency");
    for (roll = 2; roll < 13; roll++) {
        printf("%7d%13d\n", roll, points[roll]); // 修正此行
        ratio = points[roll] / 1000000;
        for (j = 1; j <= ratio; j++)
            printf("*");
        ratio = 0;
        printf("\n");
    }
    return 0; // 不要忘記返回值
}

// 函數定義
int rollDice(void) {
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    return die1 + die2;
}