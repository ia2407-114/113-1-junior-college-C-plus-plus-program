#include <stdio.h>

float avg_score(int arr[4][5], char names[5][10], int len);
// function main begins program execution
int main(void)
{
    int n[4][5] = { 0 }; // n is an array of five integers
    char names[5][10];
    float avg = 0;
    for (size_t i = 0; i < 5; ++i) {
        printf("\n�п�J�ǥ�%d���Ǹ�:", i);
        scanf_s("%d", &n[0][i]); // set element at location i to 0
        printf("\n�п�J�ǥ�%d���p�����Z:", i);
        scanf_s("%d", &n[1][i]); // set element at location i to 0
        printf("\n�п�J�ǥ�%d���ƾǦ��Z:", i);
        scanf_s("%d", &n[2][i]); // set element at location i to 0
        printf("\n�п�J�ǥ�%d���W�r:", i);
        scanf_s("%s", names[i], 10); // set element at location i to 0
    }
    printf("���Z�`����: %.2f \n", avg_score(n, names, 5));

}


float avg_score(int arr[4][5], char names[5][10], int len)
{
    float average = 0;
    int i;
    for (i = 0; i < len; i++)
    {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
        average += arr[3][i];
    }
    printf("%s%s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�", "����");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {
        printf("%s10%d%8d%8d%8d\n", names[i], arr[0][i], arr[1][i], arr[2][i], arr[3][i]);
    }
    return average / len;

}