// 1030-題目1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//題目1.寫一個程式，鍵盤輸入實驗次數ex，建立一個副程式，每次被呼叫後傳回2個骰子的總點數。最後由主程式統計出各點(2點~12點)出現的次數。
//看不懂!!!!!!!!!!!!
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int roll(void);
int main(void) {
	int a; //次數
	int c[13] = { 0 }; //範圍2~12的數列 記錄各點出現次數
	srand(time(NULL));
	printf("輸入次數");
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {
		int sum = roll();
		c[sum]++; //記錄各點出現次數
	}
	for (int i = 2; i <= 12; i++) {
		printf("%2d點出現次數：%d\n", i, c[i]);
	}
}

int roll(void) { //生成兩個點數的和
	int d1 = 1 + (rand() % 6);//第一個
	int d2 = 1 + (rand() % 6);//第二個
	return d1 + d2;
}
