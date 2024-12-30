#include <stdio.h>

float avg_score(int score[4][5], char names[5][10], int len);

int main(void) {
    int score[4][5] = { 0 };
    char names[5][10];

    for (int i = 0; i < 5; ++i) {
        printf("請輸入學生%d的姓名：", i + 1);
        scanf_s("%9s", names[i], 10);
        printf("請輸入學生%d的學號：", i + 1);
        scanf_s("%d", &score[0][i]);
        printf("請輸入學生%d的計概成績：", i + 1);
        scanf_s("%d", &score[1][i]);
        printf("請輸入學生%d的數學成績：", i + 1);
        scanf_s("%d", &score[2][i]);
    }

    float average = avg_score(score, names, 5);
    printf("所有學生的總平均成績為：%.2f\n", average);

    return 0;
}

float avg_score(int score[4][5], char names[5][10], int len) {
    float totalAverage = 0;
    printf("\n%10s%8s%8s%8s%8s\n", "姓名", "學號", "計概", "數學", "平均");

    for (int i = 0; i < len; ++i) {
        float individualAverage = (score[1][i] + score[2][i]) / 2.0f;
        score[3][i] = individualAverage;
        totalAverage += individualAverage;
        printf("%10s%8d%8d%8d%8.2f\n", names[i], score[0][i], score[1][i], score[2][i], individualAverage);
    }

    return totalAverage / len;
}
