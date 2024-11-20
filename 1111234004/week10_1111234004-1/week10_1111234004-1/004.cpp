#include <iostream>
#include <cstdio>   // 引入 printf 函數的標頭檔案

using namespace std;

// 副程式：計算每年本利和
void calculateBalance(double principal, double annualRate) {
    for (int year = 1; year <= 10; ++year) {
        principal += principal * annualRate;  // 每年本利和計算
        // 使用 printf 輸出每年本利和，保留兩位小數
        printf("第 %d 年: %.2f 元\n", year, principal);  // %.2f 保證顯示兩位小數
    }
}

int main() {
    double principal, annualRate;

    // 請使用者輸入本金
    printf("請輸入本金: ");
    scanf_s("%lf", &principal); //使用 cin 從鍵盤讀取使用者輸入的本金

    // 請使用者輸入年利率
    printf("請輸入年利率 (例如 0.05 表示 5%): ");
    scanf_s("%lf", &annualRate);  // 使用 cin 從鍵盤讀取使用者輸入的年利率

    // 呼叫副程式計算並顯示結果
    calculateBalance(principal, annualRate);

    return 0;  // 結束主程式
}
