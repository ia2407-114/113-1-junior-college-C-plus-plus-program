#include <stdio.h>
#include <string.h>

int sort_score(int arr[4][5], char names[5][10], int len);
int linear_search(int arr[4][5], char names[5][10], int len, int target_id);

int main(void)
{
    int n[4][5] = { 0 }; // n is an array of five integers
    char names[5][10];  //字串陣列
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

    printf("\n排序前:\n");
    printf("%s%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    //printf("平均成績的中位數為: %d \n", sort_score(n, names, 5));
    sort_score(n, names, 5);
    // 查詢學號
    int target_id;
    printf("\n請輸入要查詢的學號: ");
    scanf_s("%d", &target_id);
    linear_search(n, names, 5, target_id);

    printf("\n排序後:\n");
    printf("%s%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }
}

int sort_score(int arr[4][5], char names[5][10], int len)
{
    float average = 0;
    int i, j, temp;
    char tem[10];
    for (i = 0; i < len; i++) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
        average += arr[3][i];
    }

    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++)
            if (arr[0][j] > arr[0][j + 1]) {
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

    return arr[3][len / 2];
}

// 線性搜尋函式
int linear_search(int arr[4][5], char names[5][10], int len, int target_id)
{
    for (int i = 0; i < len; i++) {
        if (arr[0][i] == target_id) {
            printf("\n找到了學號 %d 的資料:\n", target_id);
            printf("姓名: %s\n", names[i]);
            printf("學號: %d\n", arr[0][i]);
            printf("計概成績: %d\n", arr[1][i]);
            printf("數學成績: %d\n", arr[2][i]);
            printf("平均成績: %d\n", arr[3][i]);
            return i; // 返回找到的位置
        }
    }
    printf("找不到學號 %d 的學生資料。\n", target_id);
    return -1; // 若找不到，返回-1
}