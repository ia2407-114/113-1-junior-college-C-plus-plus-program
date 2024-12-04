#include <stdio.h>

float avg_score(int array[5][4]); //[橫列][直排]

int main() {
    int data[5][4] = { 0 }; // 宣告陣列

    for (int i = 0; i < 5; i++) {
        printf("學號: ");
        scanf_s("%d", &data[i][0]);  // 學號
        printf("計概成績: ");
        scanf_s("%d", &data[i][1]);  // 計概成績
        printf("數學成績: ");
        scanf_s("%d", &data[i][2]);  // 數學成績
    }
    float total_avg = avg_score(data); // 呼叫副程式 avg_score

    printf("\n學號\t計概\t數學\t平均\n");    // 表格標題

    for (int i = 0; i < 5; i++) {    // 印出學生資料與平均成績
        printf("%d\t%d\t%d\t%.1f\n", data[i][0], data[i][1], data[i][2], (float)data[i][3]);
    }
    printf("全班總平均: %.2f\n", total_avg);

    return 0;
}
float avg_score(int array[5][4]) {
    float total_avg = 0.0;
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 1; j <= 2; j++) { // 計算成績
            sum += array[i][j];
        }
        float avg = (float)sum / 2;  // 計算每人平均
        array[i][3] = avg;          // 存入陣列
        total_avg += avg;
    }
    return total_avg / 5; // 傳回平均
}