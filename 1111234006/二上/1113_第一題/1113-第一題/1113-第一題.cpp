// 1113-第一題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
/*題目1.寫一個主程式，透過鍵盤輸入本金、年利率，再建立一個副程式傳入這三個參數，
計算每年的本利和之後傳回放入陣列中一共10年，並且印出陣列內本利和結果。*/

#include <stdio.h>


void calculate_interest(int a, int rate, int result[]) {
    for (int i = 0; i < 10; i++) {
        a += a * rate / 100;  // 每年加利息
        result[i] = a;        // 將結果存入陣列
    }
}

int main(void) {
    int a, b;        // 本金與年利率
    int st[10];      // 儲存每年本利和的陣列

    // 讀取本金與年利率
    printf("輸入本金: ");
    scanf_s("%d", &a);

    printf("輸入年利率: ");
    scanf_s("%d", &b);

    // 呼叫副程式計算每年的本利和
    calculate_interest(a, b, st);

    // 顯示每年本利和
    for (int i = 0; i < 10; i++) {
        printf("第%d年: %d\n", i + 1, st[i]);
    }

    return 0;
}
