#include <stdio.h>
#include <string.h>
#define SIZE 5
/*題目2:
建立一個整數二維陣列score與字元二維陣列names[5][10]，
第0列存放學生的學號，第1、2列存放他們的成績，第3列存放他們平均，
陣列names[5][10]存放學生姓名，以鍵盤輸入他們的學號成績與姓名，
並建立一個副程式sort_score()，將score陣列、學生姓名字names[5][10]以及
陣列長度傳給sort_score()，由它依據平均成績排序並計算全班中位數後，
將中位數(整數型態)傳回，並由主程式印出排序後的學號、學生姓名與成績和中位數。*/
int sort_score(int arr[4][SIZE], char names[SIZE][10], int len);
int searchKey, result;
int linear_search(int key, int arr[4][SIZE], int len);
int binary(int arr[4][SIZE], int low, int high, int key);
// function main begins program execution
int main(void)
{
    int n[4][SIZE] = { 0 }; // n is an array of five integers
    char names[5][10];  //字串陣列
    for (size_t i = 0; i < 5; ++i) {
        printf("\n請輸入學生%d的學號:", i);
        scanf_s("%d", &n[0][i]); // set element at location i to 0
        printf("\n請輸入學生%d的計概成績:", i);
        scanf_s("%d", &n[1][i]); // set element at location i to 0
        printf("\n請輸入學生%d的數學成績:", i);
        scanf_s("%d", &n[2][i]); // set element at location i to 0
        printf("\n請輸入學生%d的姓名:", i);
        scanf_s("%s", names[i], 10); // set element at location i to 0
    }
    //二元搜尋
    printf("請輸入要搜尋的學號:");
    scanf_s("%d", &searchKey);
    result = binary(n, 0, SIZE - 1, searchKey);
    if (result != -1)
    {
        printf("%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ");
        printf("%s%8d%8d%8d\n", names[result], n[0][result], n[1][result], n[2][result]);
    }
    else { printf("找不到"); }



    printf("\n排序前:\n");
    printf("%s%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }


    printf("平均成績的中位數為: %d \n", sort_score(n, names, SIZE));

    printf("%s%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ", "平均 ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i], n[3][i]);
    }


}

int linear_search(int key, int arr[4][SIZE], int len)
{
    int n;
    for (n = 0; n < len; ++n)
        if (key == arr[0][n])
            return n;
    return -1;
}



int sort_score(int arr[4][SIZE], char names[SIZE][10], int len)
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

int binary(int arr[4][SIZE], int low, int high, int key)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[0][mid] < key)
        {
            high = mid - 1;
        }
        else if (arr[0][mid] > key)
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }

    }
    return -1;
}