// Initializing the elements of an array to zeros.
#include <stdio.h>
#include <string.h>

int sort_score(int arr[3][5], char names[5][10], int len);
int binary_search(int arr[3][5], int low, int high, int key);
int main(void)
{
    int n[3][5] = { 0 }, searvhkey, result; // n is an array of five integers
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
    printf("\n排序前:\n");
    printf("%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i]);
    }


    //printf("平均成績的中位數為: %d \n", sort_score(n, names, 5));

    printf("%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {

        printf("%s%8d%8d%8d\n", names[i], n[0][i], n[1][i], n[2][i]);
    }
    //搜尋學生
    printf("\n請輸入欲搜尋之學生學號:");
    scanf_s("%d", &searvhkey);
    result = binary_search(n,0,4, searvhkey);
    if (result != -1)
    {
        printf("%s%8s%8s%8s\n", "姓名", "學號 ", "計概 ", "數學 ");
        printf("%s%8d%8d%8d\n", names[result], n[0][result], n[1][result], n[2][result]);
    }
    else { printf("找不到!!"); }


}

int sort_score(int arr[3][5], char names[5][10], int len)
{
    float average = 0;
    int i, j, temp;
    char tem[10];
    for (i = 0; i < len; i++) {
        arr[3][i] = (arr[1][i] + arr[2][i]) / 2; // 計算平均成績
        average += arr[3][i];
    }
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (arr[3][j] < arr[3][j + 1]) {
                // 交換學號
                temp = arr[0][j];
                arr[0][j] = arr[0][j + 1];
                arr[0][j + 1] = temp;

                // 交換計概成績
                temp = arr[1][j];
                arr[1][j] = arr[1][j + 1];
                arr[1][j + 1] = temp;

                // 交換數學成績
                temp = arr[2][j];
                arr[2][j] = arr[2][j + 1];
                arr[2][j + 1] = temp;

                // 交換姓名
                strcpy_s(tem, names[j]);
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], tem);
            }
        }
    }
    return 0; // 可以返回平均成績或其他需要的值
}
int binary_search(int arr[3][5], int low, int high, int key)
{
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[0][mid] < key) {
            high = mid - 1; // 搜尋左半部分
        }
        else if (arr[0][mid] > key) {
            low = mid + 1; // 搜尋右半部分
        }
        else {
            return mid; // 找到學號，返回索引
        }
    }
    return -1; // 找不到學號
}