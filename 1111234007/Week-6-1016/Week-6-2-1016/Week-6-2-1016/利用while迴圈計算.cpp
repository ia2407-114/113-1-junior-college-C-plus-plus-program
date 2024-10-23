//題目2. 請建立C程式，輸入項目數量，並利用while迴圈計算出以下數列:
//pi = 4 - (4 / 3) + (4 / 5) - (4 / 7) + (4 / 9) - (4 / 11) + ...
//並且印出pi的結果。(項目數量愈多，精確度愈高)



#include <stdio.h>

int main() {
    int n=0;
    double pi = 0.0, j = 1.0;
    int i = 0;

    // 輸入項目數量
    printf("請輸入項目數量 n: ");
    scanf_s("%d", &n);

    // 使用 while 迴圈計算 pi 的值
    while (i <= n) 
    {
        if (i % 2 )
        {
            pi += (4.0 / j);  // 偶數項為正
        }
        else 
        {
            pi -= (4.0 / j);  // 奇數項為負
        }
        // 計算每一項
        j += 2;
        i++;
    }

    // 輸出 pi 的結果
    printf("%1f", pi*-1);

    return 0;
}
