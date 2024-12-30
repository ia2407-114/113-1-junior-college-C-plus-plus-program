#include <stdio.h>
#include <string.h>

float sort_score(int arr[4][5], char names[5][10], int len);

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

    float median = sort_score(score, names, 5);

    printf("\n排序後的資料：\n");
    printf("%10s%8s%8s%8s%8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (int i = 0; i < 5; ++i) {
        printf("%10s%8d%8d%8d%8d\n", names[i], score[0][i], score[1][i], score[2][i], score[3][i]);
    }

    printf("全班成績中位數為：%.2f\n", median);

    return 0;
}

float sort_score(int arr[4][5], char names[5][10], int len) {
    float average = 0;
    int i, j, comp;

    for (i = 0; i < len; ++i) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
        average += arr[3][i];
    }

    for (i = 0; i < len - 1; ++i) {
        for (j = 0; j < len - i - 1; ++j) {
            if (arr[3][j] < arr[3][j + 1]) {
                for (comp = 0; comp < 4; ++comp) {
                    int temp = arr[comp][j];
                    arr[comp][j] = arr[comp][j + 1];
                    arr[comp][j + 1] = temp;
                }

                char tempName[10];
                strcpy_s(tempName, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], tempName);
            }
        }
    }

    float median = arr[3][len / 2];

    return median;
}
