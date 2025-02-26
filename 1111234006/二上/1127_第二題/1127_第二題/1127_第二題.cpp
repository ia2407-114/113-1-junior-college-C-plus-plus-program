// 1127_第二題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
/*題目2:建立一個整數二維陣列score與字元二維陣列names[5][10]，第0列存放學生的學號，第1、2列存放他們的成績，
第3列存放他們平均，字元二維陣列存放學生姓名，以鍵盤輸入他們的學號成績與姓名，並建立一個副程式sort_score()，
將score陣列、學生姓名字二維陣列以及陣列長度傳給sort_score()，由它排序並計算全班中位數後，將中位數(整數型態)傳回，
並由主程式印出排序後的學號、學生姓名與成績和中位數。*/

#include <stdio.h>
#include <string.h>

void sort_score(int score[5][4], char names[5][10], int len, int* median);

int main(void) {
    int score[5][4] = { 0 };      // 5個學生, 4欄資料 (學號, 計概, 數學, 平均)
    char names[5][10];          // 5個學生, 每個名字最多 9 個字元
    int median = 0;             // 中位數

    // 輸入資料
    for (int i = 0; i < 5; ++i) {
        printf("請輸入學生%d的學號: ", i + 1);
        scanf_s("%d", &score[i][0]);  // 學號
        printf("請輸入學生%d的計概成績: ", i + 1);
        scanf_s("%d", &score[i][1]);  // 計概成績
        printf("請輸入學生%d的數學成績: ", i + 1);
        scanf_s("%d", &score[i][2]);  // 數學成績
        printf("請輸入學生%d的姓名: ", i + 1);
        scanf_s("%s", names[i],10);  // 學生姓名
        // 計算平均成績並存入 score[i][3]
        score[i][3] = (score[i][1] + score[i][2]) / 2;
    }

    // 呼叫 sort_score 進行排序並計算中位數
    sort_score(score, names, 5, &median);

    // 輸出排序後的資料
    printf("\n排序後的學號、姓名、計概成績、數學成績與平均成績：\n");
    printf("%-10s%-10s%-10s%-10s%-10s\n", "學號", "姓名", "計概", "數學", "平均");
    for (int i = 0; i < 5; ++i) {
        printf("%-10d%-10s%-10d%-10d%-10d\n", score[i][0], names[i], score[i][1], score[i][2], score[i][3]);
    }

    // 輸出中位數
    printf("\n全班中位數是: %d\n", median);

    return 0;
}

// sort_score 副程式：排序學號並計算中位數
void sort_score(int score[5][4], char names[5][10], int len, int* median) {
    // 使用簡單的選擇排序根據計概成績(或者數學成績、平均)排序
    for (int i = 0; i < len - 1; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (score[i][3] < score[j][3]) {  // 比較平均成績進行排序
                // 交換成績
                for (int k = 0; k < 4; ++k) {
                    int temp = score[i][k];
                    score[i][k] = score[j][k];
                    score[j][k] = temp;
                }
                // 交換姓名
                char temp_name[10];
                strcpy_s(temp_name, names[i]);
                strcpy_s(names[i], names[j]);
                strcpy_s(names[j], temp_name);
            }
        }
    }

    // 計算中位數
    if (len % 2 == 1) {
        *median = score[len / 2][3];  // 奇數個學生，中位數是中間的數
    }
    else {
        *median = (score[len / 2 - 1][3] + score[len / 2][3]) / 2;  // 偶數個學生，中位數是兩者的平均
    }
}


