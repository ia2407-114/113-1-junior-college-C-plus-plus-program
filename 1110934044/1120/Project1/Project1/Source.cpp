#include <stdio.h>

float avg_score(int arr[4][5], int len);

int main(void) {
    int n[4][5] = { 0 };

    for (int i = 0; i < 5; ++i) {
        printf("請輸入學生%d的學號：", i + 1);
        scanf_s("%d", &n[0][i]);

        printf("請輸入學生%d的計概成績：", i + 1);
        scanf_s("%d", &n[1][i]);

        printf("請輸入學生%d的數學成績：", i + 1);
        scanf_s("%d", &n[2][i]);
    }

    float average = avg_score(n, 5);

    printf("%8s%8s%8s%8s\n", "學號", "計概", "數學", "平均");
    for (int i = 0; i < 5; ++i) {
        printf("%8d%8d%8d%8.2f\n", n[0][i], n[1][i], n[2][i], (float)n[3][i]);
    }

    printf("所有學生的平均成績為：%.2f\n", average);

    return 0;
}

float avg_score(int arr[4][5], int len) {
    float totalAverage = 0;

    for (int i = 0; i < len; i++) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2; 
        totalAverage += arr[3][i];             
    }

    return totalAverage / len; 
}
