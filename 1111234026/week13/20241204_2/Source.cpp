// Initializing the elements of an array to zeros.
#include <stdio.h>
#include <string.h>

int sort_score(int arr[3][5], char names[5][10], int len);
int binary_search(int arr[3][5], int low, int high, int key);
int main(void)
{
    int n[3][5] = { 0 }, searvhkey, result; // n is an array of five integers
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
    printf("\n�Ƨǫe:\n");
    printf("%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i]);
    }


    //printf("�������Z������Ƭ�: %d \n", sort_score(n, names, 5));

    printf("%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i]);
    }
    //�j�M�ǥ�
    printf("\n�п�J���j�M���ǥ;Ǹ�:");
    scanf_s("%d", &searvhkey);
    result = binary_search(n,0,4, searvhkey);
    if (result != -1)
    {
        printf("%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ");
        printf("%s%8d%8d%8d\n", names[result], n[0][result], n[1][result], n[2][result]);
    }
    else { printf("�䤣��!!"); }


}

int sort_score(int arr[3][5], char names[5][10], int len)
{
    float average = 0;
    int i, j, temp;
    char tem[10];
    for (i = 0; i < len; i++) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2; // �p�⥭�����Z
        average += arr[3][i];
    }
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (arr[3][j] < arr[3][j + 1]) {
                // �洫�Ǹ�
                temp = arr[0][j];
                arr[0][j] = arr[0][j + 1];
                arr[0][j + 1] = temp;

                // �洫�p�����Z
                temp = arr[1][j];
                arr[1][j] = arr[1][j + 1];
                arr[1][j + 1] = temp;

                // �洫�ƾǦ��Z
                temp = arr[2][j];
                arr[2][j] = arr[2][j + 1];
                arr[2][j + 1] = temp;

                // �洫�m�W
                strcpy_s(tem, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], tem);
            }
        }
    }
    return 0; // �i�H��^�������Z�Ψ�L�ݭn����
}
int binary_search(int arr[3][5], int low, int high, int key)
{
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[0][mid] < key) {
            high = mid - 1; // �j�M���b����
        }
        else if (arr[0][mid] > key) {
            low = mid + 1; // �j�M�k�b����
        }
        else {
            return mid; // ���Ǹ��A��^����
        }
    }
    return -1; // �䤣��Ǹ�
}