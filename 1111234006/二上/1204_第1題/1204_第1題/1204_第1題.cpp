// 1204_第1題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
/*題目1.根據現有的程式碼，加入"線性搜尋"的副程式，輸入待搜尋的學號，並且印出該筆資料在陣列中的位置、姓名、學號、成績。*/
#include <stdio.h>
#include <string.h>
/*題目2:
建立一個整數二維陣列score與字元二維陣列names[5][10]，
第0列存放學生的學號，第1、2列存放他們的成績，第3列存放他們平均，
陣列names[5][10]存放學生姓名，以鍵盤輸入他們的學號成績與姓名，
並建立一個副程式sort_score()，將score陣列、學生姓名字names[5][10]以及
陣列長度傳給sort_score()，由它依據平均成績排序並計算全班中位數後，
將中位數(整數型態)傳回，並由主程式印出排序後的學號、學生姓名與成績和中位數。*/

// 函數原型
int sort_score(int arr[4][5], char names[5][10], int len);
int linear_search(int arr[5], int len, int target);  // 新增的線性搜尋函數

// function main begins program execution
int main(void)
{
    int n[4][5] = { 0 }; // n is an array of five integers
    char names[5][10];  //字串陣列

    // 輸入學生資料
    for (size_t i = 0; i < 5; ++i) {
        printf("\n請輸入學生%d的學號:", i);
        scanf_s("%d", &n[0][i]); // 學號
        printf("\n請輸入學生%d的計概成績:", i);
        scanf_s("%d", &n[1][i]); // 計概成績
        printf("\n請輸入學生%d的數學成績:", i);
        scanf_s("%d", &n[2][i]); // 數學成績
        printf("\n請輸入學生%d的姓名:", i);
        scanf_s("%s", names[i], 10); // 學生姓名
    }

    // 輸出未排序的資料
    printf("\n排序前:\n");
    printf("%s%-8s%-8s%-8s%-8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");
    for (size_t i = 0; i < 5; ++i) {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    // 執行排序並顯示平均成績中位數
    printf("平均成績的中位數為: %d \n", sort_score(n, names, 5));

    // 請使用者輸入學號來搜尋學生資料
    int search_id;
    printf("\n請輸入要搜尋的學號: ");
    scanf_s("%d", &search_id);

    // 執行線性搜尋
    int index = linear_search(n[0], 5, search_id);
    if (index != -1) {
        printf("\n找到學生資料:\n");
        printf("位置: %d, 姓名: %s, 學號: %d, 計概成績: %d, 數學成績: %d, 平均: %d\n",
            index, names[index], n[0][index], n[1][index], n[2][index], n[3][index]);
    }
    else {
        printf("\n未找到學號為 %d 的學生。\n", search_id);
    }

    // 顯示排序後的資料
    printf("\n排序後:\n");
    printf("%s%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");
    for (size_t i = 0; i < 5; ++i) {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    return 0;
}

// sort_score function for sorting the students based on their student ID
int sort_score(int arr[4][5], char names[5][10], int len)
{
    float average = 0;
    int i, j, temp;
    char tem[10];

    // 計算平均分數並填充在 arr[3][i]
    for (i = 0; i < len; i++) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
        average += arr[3][i];
    }

    // 根據學號排序
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[0][j] > arr[0][j + 1]) {  // 改為學號排序
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
                // 交換姓名
                strcpy_s(tem, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], tem);
            }
        }
    }

    return arr[3][len / 2]; // 回傳平均成績的中位數
}

// linear_search function for searching a student by ID using linear search
int linear_search(int arr[5], int len, int target)
{
    for (int i = 0; i < len; i++) {
        if (arr[i] == target) {
            return i;  // 找到學號，返回索引
        }
    }
    return -1;  // 未找到學號，返回 -1
}
