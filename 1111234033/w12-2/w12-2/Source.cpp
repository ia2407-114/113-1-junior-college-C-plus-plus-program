#include<stdio.h>
#include<string>
int  avg_score(int arr[4][5], char names[5][10], int len);

int main()
{
    char names[5][10];
    int n[4][5] = { 0 };
    int a;
    for (int i = 0; i < 5; i++)
    {
        printf("\n輸入學生%d學號:", i + 1);
        scanf_s("%d", &n[0][i]);
        printf("\n輸入學生%d的計概成績:", i + 1);
        scanf_s("%d", &n[1][i]);
        printf("\n輸入學生%d的數學成績:", i + 1);
        scanf_s("%d", &n[2][i]);
        printf("\n輸入學生%d姓名:", i + 1);
        scanf_s("%s", names[i], 10);
    }

    a = avg_score(n, names, 5);
    printf("\n%s%8s%8s%8s%8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (int i = 0; i < 5; i++)
    {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);

    }
    printf("中位數為:%d", a);
    printf("\n");

}
int avg_score(int arr[4][5], char names[5][10], int len)
{
    float average = 0;
    int i, j, temp;
    char t[10];
    for (i = 0; i < len; i++)
    {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
        average += arr[3][i];
    }
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
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

                strcpy_s(t, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], t);
            }
        }
    }


    return arr[3][len / 2];

}