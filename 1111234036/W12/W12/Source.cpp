#include <stdio.h>
#include <string.h>

float avg_score(int arr[4][5], char names[5][10], int len);
int sort_score(int arr[4][5], char names[5][10], int len);

int main(void)
{
    int n[4][5] = { 0 };
    char names[5][10];
    float avg = 0;

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

    avg = avg_score(n, names, 5);
    int median = sort_score(n, names, 5);
    printf("全班總平均: %.2f \n", avg);
    printf("全班中位數: %d \n", median);

    printf("%-10s%-10s%-10s%-10s%-10s\n", "姓名", "學號", "計概", "數學", "平均");
    for (size_t i = 0; i < 5; ++i) {
        printf("%-10s%-10d%-10d%-10d%-10d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    return 0;
}

float avg_score(int arr[4][5], char names[5][10], int len)
{
    float total_average = 0;
    for (int i = 0; i < len; i++)
    {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
        total_average += arr[3][i];
    }
    return total_average / len;
}

int sort_score(int arr[4][5], char names[5][10], int len)
{
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[3][j] > arr[3][j + 1]) {

                for (int k = 0; k < 4; k++) {
                    int temp = arr[k][j];
                    arr[k][j] = arr[k][j + 1];
                    arr[k][j + 1] = temp;
                }
                char temp_name[10];
                strcpy_s(temp_name, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], temp_name);
            }
        }
    }

    if (len % 2 == 0) {
        return (arr[3][len / 2 - 1] + arr[3][len / 2]) / 2;
    }
    else {
        return arr[3][len / 2];
    }
}