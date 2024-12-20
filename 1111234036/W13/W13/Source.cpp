#include <stdio.h>
#include <string.h>

int sort_score(int arr[4][5], char names[5][10], int len);
int linear_search(int arr[4][5], char names[5][10], int len, int key);
int binary_search(int arr[4][5], char names[5][10], int len, int key);


int main(void)
{
    int n[4][5] = { 0 };
    char names[5][10];
    for (size_t i = 0; i < 5; ++i) {
        printf("\n�п�J�ǥ�%d���Ǹ�:", i);
        scanf_s("%d", &n[0][i]);
        printf("\n�п�J�ǥ�%d���p�����Z:", i);
        scanf_s("%d", &n[1][i]);
        printf("\n�п�J�ǥ�%d���ƾǦ��Z:", i);
        scanf_s("%d", &n[2][i]);
        printf("\n�п�J�ǥ�%d���m�W:", i);
        scanf_s("%s", names[i], 10);
    }

    printf("\n�Ƨǫe:\n");
    printf("%s%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ", "���� ");


    for (size_t i = 0; i < 5; ++i) {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    printf("�������Z������Ƭ�: %d \n", sort_score(n, names, 5));

    printf("\n�Ƨǫ�:\n");
    printf("%s%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ", "���� ");


    for (size_t i = 0; i < 5; ++i) {
        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    int search_id;
    printf("\n�п�J�n�j�M���Ǹ�:");
    scanf_s("%d", &search_id);
    int linear_result = linear_search(n, names, 5, search_id);
    if (linear_result != -1)
    {
        printf("\n�Ǹ� %d �A�m�W: %s�A�p�����Z: %d�A�ƾǦ��Z: %d\n", n[0][linear_result], names[linear_result], n[1][linear_result], n[2][linear_result]);
    }
    else
    {
        printf("\n�䤣��ӾǸ��C\n");
    }

    printf("\n�п�J�n�j�M���Ǹ�:");
    scanf_s("%d", &search_id);
    int binary_result = binary_search(n, names, 5, search_id);
    if (binary_result != -1)
    {
        printf("\n�Ǹ� %d �A�m�W: %s�A�p�����Z: %d�A�ƾǦ��Z: %d\n", n[0][binary_result], names[binary_result], n[1][binary_result], n[2][binary_result]);
    }
    else
    {
        printf("\n�䤣��ӾǸ��C\n");
    }

    return 0;
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

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len - 1; j++)
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
                strcpy_s(tem, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], tem);
            }
        }
    }

    return arr[3][len / 2];
}

int linear_search(int arr[4][5], char names[5][10], int len, int key)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[0][i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[4][5], char names[5][10], int len, int key)
{
    int low = 0, high = len - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[0][mid] == key)
        {
            return mid;
        }
        else if (arr[0][mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}