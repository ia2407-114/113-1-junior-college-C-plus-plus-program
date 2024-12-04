#include <stdio.h>
#include <string.h>

int sort_score(int arr[4][5], char names[5][10], int len);
int LS(int target, int arr[4][5], int);
int BY(int arr[4][5], int low, int high, int target);
// function main begins program execution
int main(void)
{
    int n[4][5] = { 0 }, target, result; // n is an array of five integers
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

    //�u�ʷj�M
    printf("\n��J�n�j�M���ǥ;Ǹ�(�u��): ");
    scanf_s("%d", &target);
    result = LS(target, n, 5);
    if (result != -1)
    {
        printf("%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ");
        printf("%s%8d%8d%8d\n", names[result], n[0][result], n[1][result], n[2][result]);

    }
    else { printf("\n�䤣��!!!\n"); }
    target = 0;

    //�G���j�M
    printf("\n��J�n�j�M���ǥ;Ǹ�(�G��): ");
    scanf_s("%d", &target);
    result = BY(n, 0, 4, target);
    if (result != -1)
    {
        printf("\n%s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ");
        printf("\n%s%8d%8d%8d\n", names[result], n[0][result], n[1][result], n[2][result]);
        //printf("�j�M���:%d(%d)\n", target, result);
    }
    else
        printf("\n�S���j�M���\n");



    printf("\n�Ƨǫe:\n");
    printf("%s%8s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ", "���� ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }


    printf("�������Z������Ƭ�: %d \n", sort_score(n, names, 5));

    printf("%s%8s%8s%8s%8s\n", "�m�W", "�Ǹ� ", "�p�� ", "�ƾ� ", "���� ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }


}

int LS(int target, int arr[4][5], int len)   //�u�ʷj�M��Ʃw�q
{
    for (int i = 0; i < len; i++)
    {
        if (target == arr[0][i])
        {
            return target;

        }

    }
    return -1;
}

int BY(int arr[4][5], int low, int high, int target)
{
    int mid , result = -1; 
    while (low <= high)
    {
        mid = (low + high) / 2;
        
        if (arr[0][mid] > target)
        {
            high = mid - 1;              
        }
        else if (arr[0][mid] < target)
        {
            low = mid + 1;       
        }
        else
        {
            result = mid;
            break;      
        }
    }

    return result;
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