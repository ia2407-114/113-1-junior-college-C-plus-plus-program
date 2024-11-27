#include <stdio.h>
#include <string.h>

int sort_score(int arr[4][5], char names[5][10], int len);

int main(void)
{
    int score[4][5] = { 0 };   // 存放學號、成績與平均
    char names[5][10];         // 存放學生姓名
    int median = 0;            // 儲存中位數
    for (size_t i = 0; i < 5; ++i) {
        printf("\n請輸入學生%d的學號: ", i + 1);
        scanf_s("%d", &score[0][i]);

        printf("\n請輸入學生%d的計概成績: ", i + 1);
        scanf_s("%d", &score[1][i]);

        printf("\n請輸入學生%d的數學成績: ", i + 1);
        scanf_s("%d", &score[2][i]);

        printf("\n請輸入學生%d的名字: ", i + 1);
        scanf_s("%s", names[i], 10);

        // 計算平均分數
        score[3][i] = (score[1][i] + score[2][i]) / 2;
    }

    // 呼叫排序副程式並計算中位數
    median = sort_score(score, names, 5);

    // 印出排序後結果
    printf("\n排序後的學生資料:\n");
    printf("%-10s%10s%8s%8s%8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (size_t i = 0; i < 5; ++i) {
        printf("%-10s%10d%8d%8d%8d\n",
            names[i], score[0][i], score[1][i], score[2][i], score[3][i]);
    }

    // 印出中位數
    printf("\n全班中位數為: %d\n", median);

    return 0;
}

// 排序函式
int sort_score(int arr[4][5], char names[5][10], int len)
{
    // 使用冒泡排序依照平均分數排序（由高到低）
    int temp;
    char tem[10];
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[3][j] < arr[3][j + 1]) {
                temp = arr[0][j];
                arr[0][j] = arr[0][j + 1];
                arr[0][j + 1] = temp;
                temp = arr[1][j];
                arr[1][j] = arr[1][j + 1];
                arr[1][j + 1] = temp;
                temp = arr[2][j];
                arr[2][j] = arr[2][j + 1];
                arr[2][j + 1] = temp;
                temp = arr[3][j];
                arr[3][j] = arr[3][j + 1];
                arr[3][j + 1] = temp;
                strcpy_s(tem, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], tem);
            }
        }
    }

    // 計算中位數
    if (len % 2 == 1) {
        return arr[3][len / 2]; // 若學生數為奇數，取中間平均分數
    }
    else {
        return (arr[3][len / 2 - 1] + arr[3][len / 2]) / 2; // 若為偶數，取中間兩者平均
    }
}
