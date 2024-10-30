#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);

int main(void) {
    int ex;
    int frequency[13] = { 0 }; 

    printf("輸入次數: ");
    scanf_s("%d", &ex);

    srand(time(NULL));


    for (int i = 0; i < ex; ++i) {
        int sum = rollDice();
        frequency[sum]++;
    }

    printf("%s%13s\n", "點", "出現幾次");
    for (int i = 2; i <= 12; ++i) {
        printf("%4d%13d\n", i, frequency[i]);
    }
}

int rollDice(void) {
    int die1 = 1 + (rand() % 6); 
    int die2 = 1 + (rand() % 6);
    return die1 + die2;
}
