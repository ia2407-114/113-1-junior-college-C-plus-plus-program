
#include <stdio.h>
#include <string.h>

int sort_score(int arr[4][5], char names[5][10], int len);
void linear_search(int arr[4][5], char names[5][10], int len, int target);
void binary_search(int arr[4][5], char names[5][10], int len, int target);

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

    int target;
    printf("\n�п�J�n�j�M���Ǹ�(�u�ʷj�M): ");
    scanf_s("%d", &target);
    linear_search(n, names, 5, target);

    printf("\n�п�J�n�j�M���Ǹ�(�G���j�M): ");
    scanf_s("%d", &target);
    binary_search(n, names, 5, target);

    return 0;
}

int sort_score(int arr[4][5], char names[5][10], int len)
{
    int temp;
    char tem[10];
    for (int i = 0; i < len; ++i) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
    }

    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[3][j] < arr[3][j + 1]) {
                
                for (int k = 0; k < 4; ++k) {
                    temp = arr[k][j];
                    arr[k][j] = arr[k][j + 1];
                    arr[k][j + 1] = temp;
                }
                strcpy_s(tem, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], tem);
            }
        }
    }

    return arr[3][len / 2]; 
}

void linear_search(int arr[4][5], char names[5][10], int len, int target)
{
    for (int i = 0; i < len; ++i) {
        if (arr[0][i] == target) {
            printf("\n���Ǹ� %d �b�� %d ��:\n", target, i + 1);
            printf("�m�W: %s, �Ǹ�: %d, �p��: %d, �ƾ�: %d, ����: %d\n",
                names[i], arr[0][i], arr[1][i], arr[2][i], arr[3][i]);
            return;
        }
    }
    printf("\n�����Ǹ� %d�C\n", target);
}

void binary_search(int arr[4][5], char names[5][10], int len, int target)
{
    int low = 0, high = len - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[0][mid] == target) {
            printf("\n���Ǹ� %d �b�� %d ��:\n", target, mid + 1);
            printf("�m�W: %s, �Ǹ�: %d, �p��: %d, �ƾ�: %d, ����: %d\n",
                names[mid], arr[0][mid], arr[1][mid], arr[2][mid], arr[3][mid]);
            return;
        }
        else if (arr[0][mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    printf("\n�����Ǹ� %d�C\n", target);
}