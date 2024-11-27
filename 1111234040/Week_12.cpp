#include <stdio.h>

// 原型宣告
float avg_score(float score[][5], char names[][10], int rows);

int main() {
    int rows = 5; // 學生人數
    float score[5][5] = { 0 }; // 5x5 二維陣列存放學號、計概成績、數學成績、平均成績，第5欄未使用
    char names[5][10];         // 5x10 字元陣列存放每位學生的姓名

    // 讓使用者輸入每位學生的資料
    printf("請輸入每位學生的姓名、學號（整數）、計概成績與數學成績：\n");
    for (int i = 0; i < rows; i++) {
        printf("學生 %d:\n", i + 1);
        printf("姓名: ");
        scanf_s("%s", names[i], 10); // 輸入姓名
        printf("學號: ");
        scanf_s("%f", &score[i][0]); // 輸入學號
        printf("計概成績: ");
        scanf_s("%f", &score[i][1]); // 輸入計概成績
        printf("數學成績: ");
        scanf_s("%f", &score[i][2]); // 輸入數學成績
    }

    // 呼叫副程式計算平均成績，並返回總平均
    float total_avg = avg_score(score, names, rows);

    // 主程式輸出總平均分數
    printf("\n所有學生的總平均分數: %.2f\n", total_avg);

    return 0;
}

// 副程式：計算每位學生的平均成績，並返回總平均
float avg_score(float score[][5], char names[][10], int rows) {
    float total_sum = 0; // 紀錄總分數

    printf("\n姓名\t學號\t\t計概\t數學\t平均\n");
    printf("---------------------------------------------\n");

    // 計算每位學生的平均成績
    for (int i = 0; i < rows; i++) {
        score[i][3] = (score[i][1] + score[i][2]) / 2; // 平均成績放入第4欄
        total_sum += score[i][3]; // 累加平均成績

        // 輸出每位學生的詳細資訊
        printf("%s\t%.0f\t\t%.0f\t%.0f\t%.2f\n",
            names[i], score[i][0], score[i][1], score[i][2], score[i][3]);
    }

    // 返回所有學生的總平均分數
    return total_sum / rows;
}