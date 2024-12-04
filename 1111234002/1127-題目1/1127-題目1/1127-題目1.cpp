/*題目1. 建立一個4X5的二維陣列score以及字元二維陣列names[5][10]，
分別存放學號ID、與對應的計概成績、數學成績,以及存放學生姓名。 請建立一個副程式avg_score()，
將score陣列names陣列以及陣列長度傳給avg_score()，由它計算每個同學的平均成績後，將結果放入二維陣列中，
由avg_score()印出學生姓名、學號、數學、計概與平均成績。最後再傳回總平均(浮點數)，由主程式印出。*/

#include <stdio.h>

float avg_score(float n[4][5], char names[5][10], int len);

int main(void) {
    float n[4][5] = { 0 };   // 使用 float 儲存平均分數
    char names[5][10];       // 儲存最多 5 名學生姓名

    for (int i = 0; i < 5; ++i) {
        printf("\n請輸入學生%d的學號: ", i + 1);
        scanf_s("%f", &n[0][i]);  // 學號也存成 float
        printf("\n請輸入學生%d的計概成績: ", i + 1);
        scanf_s("%f", &n[1][i]);  // 計概成績
        printf("\n請輸入學生%d的數學成績: ", i + 1);
        scanf_s("%f", &n[2][i]);  // 數學成績
        printf("\n請輸入學生%d的姓名: ", i + 1);
        scanf_s("%s", names[i], names[i]); // 指定緩衝區大小
    }

    // 計算並顯示總平均
    printf("全班總平均: %.2f \n", avg_score(n, names, 5));
    return 0;
}

float avg_score(float n[4][5], char names[5][10], int len) {
    float total_avg = 0;

    // 計算每個學生的平均分數
    for (int i = 0; i < len; ++i) {
        n[3][i] = (n[1][i] + n[2][i]) / 2.0f;  // 計算平均分數
        total_avg += n[3][i];                  // 累加總分
    }

    // 列印標題
    printf("\n%-8s %-8s %-8s %-8s %-8s\n", "學號", "計概", "數學", "平均", "姓名");

    // 列印每位學生的詳細資料
    for (int i = 0; i < len; ++i) {
        printf("%-8.0f %-8.2f %-8.2f %-8.2f %-8s\n", n[0][i], n[1][i], n[2][i], n[3][i], names[i]);
    }

    // 返回全班的平均成績
    return total_avg / len;
}

