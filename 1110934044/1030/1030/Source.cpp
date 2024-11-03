#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollDice(void);
int main(void) {
    int ex;
    int f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0;
    printf("請輸入實驗次數: ");
    scanf_s("%d", &ex);
    srand(time(NULL));
    for (int i = 0; i < ex; i++) {
        int total_points = rollDice();

        switch (total_points) {
        case 2: ++f2; break;
        case 3: ++f3; break;
        case 4: ++f4; break;
        case 5: ++f5; break;
        case 6: ++f6; break;
        case 7: ++f7; break;
        case 8: ++f8; break;
        case 9: ++f9; break;
        case 10: ++f10; break;
        case 11: ++f11; break;
        case 12: ++f12; break;
        }
    }
    printf("%s%13s\n", "點數", "出現次數");
    printf("   2%13d\n", f2);
    printf("   3%13d\n", f3);
    printf("   4%13d\n", f4);
    printf("   5%13d\n", f5);
    printf("   6%13d\n", f6);
    printf("   7%13d\n", f7);
    printf("   8%13d\n", f8);
    printf("   9%13d\n", f9);
    printf("  10%13d\n", f10);
    printf("  11%13d\n", f11);
    printf("  12%13d\n", f12);

    return 0;
}
int rollDice(void) {
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);
    return die1 + die2;
}
