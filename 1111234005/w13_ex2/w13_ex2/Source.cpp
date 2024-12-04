#include <stdio.h>
#include <string.h>
/*�D��2:
�إߤ@�Ӿ�ƤG���}�Cscore�P�r���G���}�Cnames[5][10]�A
��0�C�s��ǥͪ��Ǹ��A��1�B2�C�s��L�̪����Z�A��3�C�s��L�̥����A
�}�Cnames[5][10]�s��ǥͩm�W�A�H��L��J�L�̪��Ǹ����Z�P�m�W�A
�ëإߤ@�ӰƵ{��sort_score()�A�Nscore�}�C�B�ǥͩm�W�rnames[5][10]�H��
�}�C���׶ǵ�sort_score()�A�ѥ��̾ڥ������Z�ƧǨíp����Z����ƫ�A
�N�����(��ƫ��A)�Ǧ^�A�åѥD�{���L�X�Ƨǫ᪺�Ǹ��B�ǥͩm�W�P���Z�M����ơC*/
int sort_score(int arr[4][5], char names[5][10], int len);
int binary_search(int key, int arr[4][5], int len);
// function main begins program execution
int main(void)
{
    int n[4][5] = { 0 }, searchkey, result; // n is an array of five integers
    char names[5][10];  //�r��}�C
    for (size_t i = 0; i < 5; ++i) {
        printf("\n�п�J�ǥ�%d���Ǹ�:", i);
        scanf_s("%d", &n[0][i]); // set element at location i to 0
        printf("\n�п�J�ǥ�%d���p�����Z:", i);
        scanf_s("%d", &n[1][i]); // set element at location i to 0
        printf("\n�п�J�ǥ�%d���ƾǦ��Z:", i);
        scanf_s("%d", &n[2][i]); // set element at location i to 0
        printf("\n�п�J�ǥ�%d���m�W:", i);
        scanf_s("%s", names[i], 10); // set element at location i to 0
    }
    printf("�п�J�ǥ;Ǹ��i��G���j�M: ");
    scanf_s("%d", &searchkey);
    result = binary_search(searchkey, n, 5);
    if (result != -1) {
        printf("%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ");
        printf("%s%8d%8d%8d\n", names[result], n[0][result], n[1][result], n[2][result]);
    }
    else { printf("�䤣��!!"); }
    printf("\n�Ƨǫe:\n");
    printf("%s%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ", "���� ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }


    printf("�������Z������Ƭ�: %d \n", sort_score(n, names, 5));

    printf("%s%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ", "���� ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }

    return 0;
}

int binary_search(int key, int arr[4][5], int len) {
    int low = 0, high = len - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[0][mid] == key) {
            return mid; // Return the index if found
        }
        else if (arr[0][mid] < key) {
            high = mid - 1; // Search the left half
        }
        else {
            low = mid + 1; // Search the right half
        }
    }
    return -1; // If not found, return -1
}
int linear_search(int key, int arr[4][5], int len)
{
    int n;
    for (n = 0; n < len; ++n)
        if (key == arr[0][n])
            return n;
    return-1;
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