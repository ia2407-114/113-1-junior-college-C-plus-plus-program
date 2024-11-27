//建立一個整數二維陣列score與字元二維陣列names[5][10]，第0列存放學生的學號，第1、2列存放他們的成績，第3列存放他們平均，字元二維陣列存放學生姓名，以鍵盤輸入他們的學號成績與姓名，並建立一個副程式sort_score()，將score陣列、學生姓名字二維陣列以及陣列長度傳給sort_score()，由它排序並計算全班中位數後，將中位數(整數型態)傳回，並由主程式印出排序後的學號、學生姓名與成績和中位數。


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