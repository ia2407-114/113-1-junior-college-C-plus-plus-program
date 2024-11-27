#include <stdio.h>
#include <stdlib.h>

int a(void); // 模擬擲兩顆骰子並返回總和
void zu(int f[]); // 顯示柱狀圖

int main(void) {
    int f[13] = { 0 };
    int ex; // 實驗次數

   // 輸入實驗次數
    printf("輸入實驗次數: ");
    scanf_s("%d", &ex);

    // 執行擲骰子的實驗
    for (int i = 0; i < ex; ++i) {
        int total = a(); // 擲骰子並獲得總和
        f[total]++; // 根據總和更新頻率
    }
    // 顯示柱狀圖
    zu(f);

    return 0;
}

// 模擬擲兩顆骰子並返回總和
int a(void) {
    int d1 = 1 + (rand() % 6);
    int d2 = 1 + (rand() % 6);
    return d1 + d2;
}

// 函數實現：顯示柱狀圖
void zu(int f[]) {
    for (int i = 2; i <= 12; ++i) { // 點數範圍是2到12
        printf("%d: %u ", i, f[i]); // 顯示每個總和的出現次數
        for (int j = 0; j < f[i]; ++j) {
            printf("*"); // 每個頻率對應一個星號
        }
        printf("\n");
    }
}
