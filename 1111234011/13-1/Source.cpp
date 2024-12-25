#include <stdio.h>
#include <string.h>

int sort_score(int arr[4][5], char names[5][10], int len);
void linear(int arr[4][5], char names[5][10], int len, int id);

int main(void)
{
    int n[4][5] = { 0 };
    char names[5][10];

    for (size_t i = 0; i < 5; ++i) {
        printf("\n請輸入學生%d的學號:", i + 1);
        scanf_s("%d", &n[0][i]);
        printf("\n請輸入學生%d的計概成績:", i + 1);
        scanf_s("%d", &n[1][i]);
        printf("\n請輸入學生%d的數學成績:", i + 1);
        scanf_s("%d", &n[2][i]);
        printf("\n請輸入學生%d的姓名:", i + 1);
        scanf_s("%s", names[i], 10);
    }

    printf("\n%s%8s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");
    for (size_t i = 0; i < 5; ++i)
    {
        n[3][i] = (n[1][i] + n[2][i]) / 2;
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    printf("\n平均成績的中位數為: %d \n", sort_score(n, names, 5));

    printf("\n按學號排序:\n");

    printf("\n%s%8s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");
    for (size_t i = 0; i < 5; ++i)
    {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    int id;
    printf("\n請輸入待搜尋的學號: ");
    scanf_s("%d", &id);

    linear(n, names, 5, id);

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
            if (arr[0][j] < arr[0][j + 1])
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

void linear(int arr[4][5], char names[5][10], int len, int id)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[0][i] == id)
        {
            printf("\n學號 %d 的學生資料:\n", id);
            printf("姓名: %s\n", names[i]);
            printf("學號: %d\n", arr[0][i]);
            printf("計概成績: %d\n", arr[1][i]);
            printf("數學成績: %d\n", arr[2][i]);
            printf("平均成績: %d\n", arr[3][i]);
            return;
        }
    }
    printf("\n找不到學號 %d 的學生資料。\n", id);
}
