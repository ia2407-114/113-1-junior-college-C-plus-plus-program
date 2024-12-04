// 1204-第1題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
/* 題目1.根據現有的程式碼，加入線性搜尋的副程式，輸入待搜尋的學號，
並且印出該筆資料在陣列中的位置、姓名、學號、成績。 */
#include <stdio.h>
#include <string.h>

// 宣告線性搜尋函數
int linear_search(int arr[5], int key, int len);

// function main begins program execution
int main(void)
{
    int n[4][5] = { 0 }; // n is an array of five integers
    char names[5][10];  // 字串陣列
    for (size_t i = 0; i < 5; ++i) {
        printf("\n請輸入學生%d的學號:", i);
        scanf_s("%d", &n[0][i]); // 學號
        printf("\n請輸入學生%d的計概成績:", i);
        scanf_s("%d", &n[1][i]); // 計概成績
        printf("\n請輸入學生%d的數學成績:", i);
        scanf_s("%d", &n[2][i]); // 數學成績
        printf("\n請輸入學生%d的姓名:", i);
        scanf_s("%s", names[i], 10); // 姓名
    }

    printf("\n排序前:\n");
    printf("%s%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");

    // 顯示學生資料
    for (size_t i = 0; i < 5; ++i) {
        n[3][i] = (n[1][i] + n[2][i]) / 2;  // 計算平均成績
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    // 請使用者輸入待搜尋的學號
    int search_id;
    printf("\n請輸入待搜尋的學號: ");
    scanf_s("%d", &search_id);

    // 呼叫線性搜尋函數查找學號
    int index = linear_search(n[0], search_id, 5);

    if (index != -1) {
        // 若找到，顯示該學生資料
        printf("\n找到學號 %d 的學生資料:\n", search_id);
        printf("位置: %d\n", index + 1);  // 顯示位置（從1開始）
        printf("姓名: %s\n", names[index]);
        printf("學號: %d\n", n[0][index]);
        printf("計概成績: %d\n", n[1][index]);
        printf("數學成績: %d\n", n[2][index]);
        printf("平均成績: %d\n", n[3][index]);
    }
    else {
        printf("\n找不到學號 %d 的學生。\n", search_id);
    }

    return 0;
}

// 線性搜尋函數，返回學號所在的索引位置，若未找到返回 -1
int linear_search(int arr[5], int key, int len)
{
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i;  // 找到學號，返回索引位置
        }
    }
    return -1;  // 沒有找到學號，返回 -1
}


int sort_score(int arr[4][5], char names[5][10], int len)
{
    int i, j, temp;
    char tem[10];

    // 進行學號排序（氣泡排序）
    for (i = 0; i < len - 1; i++)  
    {
        for (j = 0; j < len - 1 - i; j++)  
        {
            if (arr[0][j] > arr[0][j + 1])  // 如果前一個學號大於後一個學號，交換
            {
                // 交換學號
                temp = arr[0][j];
                arr[0][j] = arr[0][j + 1];
                arr[0][j + 1] = temp;

                // 交換計概成績
                temp = arr[1][j];
                arr[1][j] = arr[1][j + 1];
                arr[1][j + 1] = temp;

                // 交換數學成績
                temp = arr[2][j];
                arr[2][j] = arr[2][j + 1];
                arr[2][j + 1] = temp;

                // 交換平均成績
                temp = arr[3][j];
                arr[3][j] = arr[3][j + 1];
                arr[3][j + 1] = temp;                                                                                  

                // 交換學生姓名
                strcpy_s(tem, names[j]);
                strcpy_s(names[j], names[j + 1]);
                                                                  
                strcpy_s(names[j + 1], tem);
            }
        }
    }

    // 返回中位數的平均成績（排序後依然返回平均成績）
    return arr[3][len / 2];
}
