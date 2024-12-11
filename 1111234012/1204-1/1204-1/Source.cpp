#include <stdio.h>
#include <string.h>
#define size 5
/*題目1. 根據現有的程式碼，加入線性搜尋的副程式，輸入待搜尋的學號，並且印出該筆資料在陣列中的位置、姓名、學號、成績。*/
int sort_score(int arr[4][5], char names[5][10], int len);
int linear_search(int key, int arr[4][size], int len);
int main(void)
{
    int n[4][size] = { 0 }, searchKey, result;
    char names[size][10];
    for (size_t i = 0; i < size; ++i)
    {
        printf("\n請輸入學生%d的學號:", i);
        scanf_s("%d", &n[0][i]);
        printf("\n請輸入學生%d的計概成績:", i);
        scanf_s("%d", &n[1][i]);
        printf("\n請輸入學生%d的數學成績:", i);
        scanf_s("%d", &n[2][i]);
        printf("\n請輸入學生%d的姓名:", i);
        scanf_s("%s", names[i], 10);
    }

    printf("請輸入要尋找的學號");
    scanf_s("%d", &searchKey);
    result = linear_search(searchKey, n, size);
    if (result != -1)
    {
        printf("%s%8s%8s%8s\n", "姓名", "學號", "計概", "數學");
        printf("%s%8d%8d%8d\n", names[result], n[0][result], n[1][result], n[2][result]);
    }
    else
    {
        printf("找不到");
    }

    printf("\n排序前:\n");
    printf("%s%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");

    for (size_t i = 0; i < 5; ++i)
    {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    printf("平均成績的中位數為: %d \n", sort_score(n, names, 5));
    printf("%s%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");

    for (size_t i = 0; i < 5; ++i)
    {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }
}
int sort_score(int arr[4][5], char names[5][10], int len)
{
    float average = 0;
    int i, j, temp;
    char tem[10];
    for (i = 0; i < len; i++)
    {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
        average += arr[3][i];
    }
    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++)
            if (arr[3][j] < arr[3][j + 1])
            {
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

int linear_search(int key, int arr[4][size], int len)
{
    int n;
    for (n = 0; n < len; n++)
        if (key == arr[0][n])
            return n;
    return -1;
}