// Initializing the elements of an array to zeros.
#include <stdio.h>
#include <string.h>
//int sort_score(int arr[4][5], char names[5][10], int len);
int linear(int target, int arr[4][5], int len);
int main(void)
{
    int i;
    int n[4][5] = { 0 }; 
    char names[5][10];
    for ( i = 0; i < 5; ++i) {
        printf("�п�J�ǥ�%d���Ǹ�:\n", i);
        scanf_s("%d", &n[0][i]);
        printf("�п�J�ǥ�%d���p�����Z:\n", i);
        scanf_s("%d", &n[1][i]); 
        printf("�п�J�ǥ�%d���ƾǦ��Z:\n", i);
        scanf_s("%d", &n[2][i]);
        printf("�п�J�ǥ�%d���m�W:\n", i);
        scanf_s("%s", names[i], 10); 
    }

    //printf("�Ƨǫe:\n");
    printf("%s%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ", "���� ");

    for ( i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }


    //printf("�������Z������Ƭ�: %d \n", sort_score(n, names, 5));
    int target = 0,find = 0;
    printf("�п�J�n�j�M���Ǹ�:");
    scanf_s("%d",&target);
    find = linear(target, n ,5);
    printf("%s%8d%8d%8d\n", names[find], n[0][find], n[1][find], n[2][find], n[3][find]);



}

/*
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
            if (arr[0][j] > arr[0][j + 1])
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
*/
int linear(int target, int arr[4][5], int len) {
    int i;
    for (i = 0; i < len; i++);
    if (arr[0][i] == target) {

        return i;
    }
    return -1;
}