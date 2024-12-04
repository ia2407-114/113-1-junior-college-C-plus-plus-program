// 1023-第3題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
/*題目3: (max. 100)寫出兩個副程式，分別為fact(x)求x的階乘，
以及利用庫存函數pow(x,i)求xi 值，再利用題目1或題目2的副程式，
根據p.143的3.45(c)題，傳回並印出變數ex的值。
e^x= 1+(x^1/1!)+(x^2/2!)+(x^3/3!)+⋯*/

#include<stdio.h>
#include<math.h>

// 定義計算 e^x 的函數
double ee(int x);

// 定義計算階乘的函數
int fact(int y);

int main(void) {
    int x; 
    int i;  

    printf("輸入整數x：");
    scanf_s("%d", &x); 

    printf("輸入整數i：");
    scanf_s("%d", &i);

    printf("x 的階乘：%d\n", fact(x));

    printf("求 x^i 值：%.2f\n", pow(x, i));

    printf("變數 e^x 的值：%.6f", ee(x));
}

// 計算階乘的函數，接收一個整數 y，返回 y 的階乘
int fact(int y) {
    int xj = 1;  // 用來儲存階乘結果，初始值為 1
    for (int i = 1; i <= y; i++) {
        xj *= i;  // 從 1 到 y 做乘法，計算 y 的階乘
    }
    return xj;  // 返回階乘結果
}

// 計算 e^x 的函數
double ee(int x) {
    double ex = 1.0;  // 初始化 ex 為 1.0，因為 e^0 = 1
    int xj = 1;       // 初始化階乘變數

    // 使用迴圈計算泰勒展開式的每一項
    for (int i = 1; i <= x; i++) {
        ex += (pow(x, i) / fact(i));  // 每次增加 (x^i) / i! 項次
    }
    return ex;  // 返回 e^x 的近似值
}

