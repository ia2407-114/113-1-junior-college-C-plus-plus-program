// 1204-第2題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
///*題目2:
/*建立一個整數二維陣列score與字元二維陣列names[5][10]，
第0列存放學生的學號，第1、2列存放他們的成績，第3列存放他們平均，
陣列names[5][10]存放學生姓名，以鍵盤輸入他們的學號成績與姓名，
並建立一個副程式sort_score()，將score陣列、學生姓名字names[5][10]以及
陣列長度傳給sort_score()，由它依據平均成績排序並計算全班中位數後，
將中位數(整數型態)傳回，並由主程式印出排序後的學號、學生姓名與成績和中位數。*/

#include <stdio.h>
#include <string.h>

// 函數聲明：排序學生資料並計算中位數
int sort_score(int score[4][5], char names[5][10], int len);

// 函數聲明：二元搜尋學號
int binary_search(int score[5], int key, int len);

int main(void)
{
    // 定義學生資料陣列：score[4][5]：第0列為學號，第1列為計概成績，第2列為數學成績，第3列為平均成績
    int score[4][5] = { 0 };
    // 學生姓名陣列
    char names[5][10];

    // 輸入學生資料
    for (size_t i = 0; i < 5; ++i) {
        printf("\n請輸入學生%d的學號: ", i + 1);
        scanf_s("%d", &score[0][i]);  // 學號
        printf("\n請輸入學生%d的計概成績: ", i + 1);
        scanf_s("%d", &score[1][i]);  // 計概成績
        printf("\n請輸入學生%d的數學成績: ", i + 1);
        scanf_s("%d", &score[2][i]);  // 數學成績
        printf("\n請輸入學生%d的姓名: ", i + 1);
        scanf_s("%s", names[i], 10);  // 學生姓名
    }

    // 計算每個學生的平均成績
    for (size_t i = 0; i < 5; ++i) {
        score[3][i] = (score[1][i] + score[2][i]) / 2;  // 計算平均成績
    }

    // 排序學生資料（根據學號排序）
    sort_score(score, names, 5);

    // 顯示排序後的學生資料
    printf("\n排序後:\n");
    printf("%-10s%-10s%-10s%-10s%-10s\n", "姓名", "學號", "計概成績", "數學成績", "平均成績");
    for (size_t i = 0; i < 5; ++i) {
        printf("%-10s%-10d%-10d%-10d%-10d\n", names[i], score[0][i], score[1][i], score[2][i], score[3][i]);
    }

    // 輸入待搜尋的學號
    int search_id;
    printf("\n請輸入待搜尋的學號: ");
    scanf_s("%d", &search_id);

    // 呼叫二元搜尋函數查找學號
    int index = binary_search(score[0], search_id, 5);

    // 顯示搜尋結果
    if (index != -1) {
        // 若找到，顯示該學生資料
        printf("\n找到學號 %d 的學生資料:\n", search_id);
        printf("位置: %d\n", index + 1);  // 顯示位置（從1開始）
        printf("姓名: %s\n", names[index]);
        printf("學號: %d\n", score[0][index]);
        printf("計概成績: %d\n", score[1][index]);
        printf("數學成績: %d\n", score[2][index]);
        printf("平均成績: %d\n", score[3][index]);
    }
    else {
        printf("\n找不到學號 %d 的學生。\n", search_id);
    }

    return 0;
}

// 排序函數，根據學生學號排序（氣泡排序）
int sort_score(int score[4][5], char names[5][10], int len)
{
    int i, j, temp;
    char temp_name[10];

    // 進行學號排序（氣泡排序）
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (score[0][j] > score[0][j + 1]) {  // 如果前一個學號大於後一個學號，交換
                // 交換學號
                temp = score[0][j];
                score[0][j] = score[0][j + 1];
                score[0][j + 1] = temp;

                // 交換計概成績
                temp = score[1][j];
                score[1][j] = score[1][j + 1];
                score[1][j + 1] = temp;

                // 交換數學成績
                temp = score[2][j];
                score[2][j] = score[2][j + 1];
                score[2][j + 1] = temp;

                // 交換平均成績
                temp = score[3][j];
                score[3][j] = score[3][j + 1];
                score[3][j + 1] = temp;

                // 交換學生姓名
                strcpy_s(temp_name, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], temp_name);
            }
        }
    }

    return 0;
}

// 二元搜尋函數，搜尋學號，若找到返回索引，否則返回-1
int binary_search(int score[5], int key, int len)
{
    int low = 0, high = len - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (score[mid] == key) {
            return mid;  // 找到學號，返回該索引
        }
        else if (score[mid] < key) {
            low = mid + 1;  // 搜尋右半部分
        }
        else {
            high = mid - 1;  // 搜尋左半部分
        }
    }
    return -1;  // 沒有找到學號，返回-1
}
