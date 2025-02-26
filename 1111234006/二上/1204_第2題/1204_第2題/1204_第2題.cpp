// 1204_第2題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//題目2. 根據現有的程式碼，加入"二元搜尋"的副程式，輸入待搜尋的學號，並且印出該筆資料在陣列中的位置、姓名、學號、成績。

#include <stdio.h>
#include <string.h>

// 函數原型
int sort_score(int arr[4][5], char names[5][10], int len);
int binary_search(int arr[5], int len, int target);  // 新增的二元搜尋函數

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
    printf("%s%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");
    for (size_t i = 0; i < 5; ++i) {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    // 執行排序並顯示平均成績中位數
    printf("平均成績的中位數為: %d \n", sort_score(n, names, 5));

    // 請使用者輸入學號來搜尋學生資料
    int search_id;
    printf("\n請輸入要搜尋的學號: ");
    scanf_s("%d", &search_id);

    // 執行二元搜尋
    int index = binary_search(n[0], 5, search_id);
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

    // 根據平均成績排序
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[3][j] < arr[3][j + 1]) {
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

// binary_search function for searching a student by ID using binary search
int binary_search(int arr[5], int len, int target)
{
    int left = 0, right = len - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // 找到學號，返回索引
        }
        else if (arr[mid] < target) {
            left = mid + 1;  // 搜尋右半部
        }
        else {
            right = mid - 1;  // 搜尋左半部
        }
    }
    return -1;  // 未找到學號，返回 -1
}
