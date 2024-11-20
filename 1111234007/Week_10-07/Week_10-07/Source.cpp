//
//題目1. 寫一個主程式，透過鍵盤輸入本金、年利率，再建立一個副程式傳入這三個參數，
// 計算每年的本利和之後傳回放入陣列中一共10年，並且印出陣列內本利和結果

// Fig. 6.3: fig06_03.c
// Initializing the elements of an array to zeros.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int n [5] = {0},i ; // n is an array of five integers

    for ( i = 0; i < 5; ++i) {
        printf("輸入一個數\n", (i+1));
        scanf_s("%d\n",&n[i]);
    }
    
    printf("%s%13s\n", "Element", "Value");

    // output contents of array n in tabular format
    for ( i = 0; i < 5; ++i) {
        printf("%7u%13d\n", i, n[i]);
    }
}