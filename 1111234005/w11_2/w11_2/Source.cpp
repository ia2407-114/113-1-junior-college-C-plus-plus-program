#include <stdio.h>
#include<string.h>

int sort_score(int arr[4][5], char names[5][10], int len);
// function main begins program execution
int main(void)
{
    int n[4][5] = { 0 }; // n is an array of five integers
    char names[5][10];
    float avg = 0;
    float median;
    for (size_t i = 0; i < 5; ++i) {
        printf("\n請輸入學生%d的學號:", i);
        scanf_s("%d", &n[0][i]); // set element at location i to 0
        printf("\n請輸入學生%d的計概成績:", i);
        scanf_s("%d", &n[1][i]); // set element at location i to 0
        printf("\n請輸入學生%d的數學成績:", i);
        scanf_s("%d", &n[2][i]); // set element at location i to 0
        printf("\n請輸入學生%d的姓名:", i);
        scanf_s("%s", names[i], 10); // set element at location i to 0
    }
    // 排序並計算中位數
    median = sort_score(n, names, 5);

    // 輸出排序後的結果
    printf("\n全班成績中位數: %.0f\n", median);
    printf("%-10s %-10s %8s %8s %8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (size_t i = 0; i < 5; ++i) {
        printf("%-10s %-10d %8d %8d %8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }


    return 0;
}



int sort_score(int arr[4][5], char names[5][10], int len)
{
    float average = 0;
    int i,j,tame;
    char tame_name[10];

    // 計算平均分數
    for (i = 0; i < len; i++) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
    }

    // 冒泡排序，依照平均分數由高到低排序
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (arr[3][j] < arr[3][j + 1]) {
                // 交換分數資料
                for (int k = 0; k < 4; k++) {
                    tame = arr[k][j];
                    arr[k][j] = arr[k][j + 1];
                    arr[k][j + 1] = tame;
                }
                // 交換姓名
                strcpy_s(tame_name, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], tame_name);
            }
        }
    }

    // 計算中位數
    if (len % 2 == 1) {
        return arr[3][len / 2]; // 奇數，取中間值
    }
    else {
        return (arr[3][len / 2 - 1] + arr[3][len / 2]) / 2; // 偶數，取中間兩值平均
    }
}

