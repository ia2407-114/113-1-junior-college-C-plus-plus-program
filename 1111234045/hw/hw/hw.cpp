// hw.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>
int dice();

int main(void)
{
    
    unsigned  int f2 = 0;
    unsigned int f3 = 0;
    unsigned int f4 = 0;
    unsigned int f5 = 0;
    unsigned  int f6 = 0;
    unsigned int f7 = 0;
    unsigned int f8 = 0;
    unsigned int f9 = 0;
    unsigned  int f10 = 0;
    unsigned int f11 = 0;
    unsigned  int f12 = 0;
    unsigned int roll,time;
    
    
    scanf_s("%d", &time);
    
        for (roll = 1; roll <= time; ++roll) {
            int face = dice();


            switch (face) {
            case 2:
                ++f2;
                break;
            case 3:
                ++f3;
                break;
            case 4:
                ++f4;
                break;
            case 5:
                ++f5;
                break;
            case 6:
                ++f6;
                break;
            case 7:
                ++f7;
                break;
            case 8:
                ++f8;
                break;
            case 9:
                ++f9;
                break;
            case 10:
                ++f10;
                break;
            case 11:
                ++f11;
                break;
            case 12:
                ++f12;
                break;
            }
        }
    
    // display results in tabular format
    printf("%s%13s\n", "Face", "Frequency");
    
    printf("   2%13u\n", f2);
    printf("   3%13u\n", f3);
    printf("   4%13u\n", f4);
    printf("   5%13u\n", f5);
    printf("   6%13u\n", f6);
    printf("   7%13u\n", f7);
    printf("   8%13u\n", f8);
    printf("   9%13u\n", f9);
    printf("   10%13u\n", f10);
    printf("   11%13u\n", f11);
    printf("   12%13u\n", f12);
    
    
}
int dice()
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);


    printf("兩顆骰子的數 %d\n", die1 + die2);
    return die1 + die2;
}





// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
