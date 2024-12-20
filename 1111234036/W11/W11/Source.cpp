#include <stdio.h>
#define ROWS 4
#define COLS 5
float avg_score(int scores[ROWS][COLS], int rows, int cols);

int main()
{
    int scores[ROWS][COLS];
    for (int i = 0; i < 4; i++)
    {
        printf("分別輸入學號,計概成績,數學成績 學生%d: ", i + 1);
        scanf_s("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
    }

    float total_avg = avg_score(scores, ROWS, COLS);

    printf("總平均: %.2f\n", total_avg);

    return 0;
}

float avg_score(int scores[ROWS][COLS], int rows, int cols)
{
    float total_avg = 0;
    for (int i = 0; i < 4; i++)
    {
        float sum = scores[i][1] + scores[i][2];
        scores[i][4] = sum / 2;
        total_avg += scores[i][4];
    }
    return total_avg / rows;
}