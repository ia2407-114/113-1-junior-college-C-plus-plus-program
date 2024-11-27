#include <stdio.h>
#include <string.h>

int sort_score(int arr[4][5], char names[5][10], int len);

int main(void)
{
    int score[4][5] = { 0 };   
    char names[5][10];         
    int median = 0;           
    for (size_t i = 0; i < 5; ++i) {
        printf("\n請輸入學生%d的學號: ", i + 1);
        scanf_s("%d", &score[0][i]);

        printf("\n請輸入學生%d的計概成績: ", i + 1);
        scanf_s("%d", &score[1][i]);

        printf("\n請輸入學生%d的數學成績: ", i + 1);
        scanf_s("%d", &score[2][i]);

        printf("\n請輸入學生%d的名字: ", i + 1);
        scanf_s("%s", names[i], 10);

     
        score[3][i] = (score[1][i] + score[2][i]) / 2;
    }


    median = sort_score(score, names, 5);

 
    printf("\n排序後的學生資料:\n");
    printf("%-10s%10s%8s%8s%8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (size_t i = 0; i < 5; ++i) {
        printf("%-10s%10d%8d%8d%8d\n",
            names[i], score[0][i], score[1][i], score[2][i], score[3][i]);
    }

  
    printf("\n全班中位數為: %d\n", median);

    return 0;
}

int sort_score(int arr[4][5], char names[5][10], int len)
{
   
    int temp;
    char tem[10];
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[3][j] < arr[3][j + 1]) {
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

   
    if (len % 2 == 1) {
        return arr[3][len / 2]; 
    }
    else {
        return (arr[3][len / 2 - 1] + arr[3][len / 2]) / 2;
    }
}
