//nooooooooo不會
/*題目1. 建立一個4X5的二維陣列score，
分別存放學號ID、與對應的計概成績、數學成績, 請建立一個副程式avg_score()，將score陣列以及陣列長度傳給avg_score()，
由它計算每個同學的平均成績後，將結果放入二維陣列中，傳回總平均(浮點數)，並由主程式印出。*/

#include <stdio.h>

// 函數宣告
float avg(int s[4][5]);

int main() {
    // 定義二維陣列
    int s[4][5] = {0}; //[列][行]

    // 使用者輸入學號與成績
    printf("請輸入%d位學生的學號與成績（計概與數學）：\n", 4);
    for (int i = 0; i < 4; i++) {
        printf("學號：");
        scanf_s("%d", &s[i][0]);
        printf("計概成績：");
        scanf_s("%d", &s[i][1]);
        printf("數學成績：");
        scanf_s("%d", &s[i][2]);
    }

    // 呼叫副程式，計算平均
    float total_avg = avg(s);

    // 印出每位學生的平均成績
    printf("\n學號\t計概\t數學\t平均\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t%d\t%d\t%.1f\n", s[i][0], s[i][1], s[i][2], (float)s[i][3]);
    }

    // 印出總平均
    printf("\n平均: %.2f\n", total_avg);

    return 0;
}

// 副程式：計算平均成績
float avg(int s[4][5]) {
    float total_sum = 0; // 紀錄總分
    int total_scores = 0; // 總分數

    for (int i = 0; i < 4; i++) {
        int sum = 0;
        // 計算每位學生的成績總和
        sum = s[i][1] + s[i][2];
        s[i][3] = sum / 2.0; // 存入平均成績
        total_sum += s[i][3]; // 累加平均成績
        total_scores++;
    }
    return total_sum / total_scores; // 傳回總平均
}

 