//題目4. 修改上述程式碼，用格式化函數來寫入學生姓名與成績，並且讀取出來印到螢幕中。
#include <stdio.h>

int main()
{
    FILE* fp;       // 宣告檔案指標
    char fname[20] = "students.txt";  // 設定檔案名稱
    char name[50];  // 學生姓名
    int score;      // 學生成績
    int num_students;  // 學生人數

    // 輸入學生人數
    printf("請輸入學生人數: ");
    scanf_s("%d", &num_students);

    // 開啟寫入檔案
    fp = fopen(fname, "w");
    if (fp == NULL) {
        printf("無法開啟檔案進行寫入!\n");
        return 1; // 無法開啟檔案，結束程式
    }

    printf("開始寫入檔案 %s..\n", fname);

    // 輸入每個學生的姓名和成績並寫入檔案
    for (int i = 1; i <= num_students; i++) {
        printf("請輸入第 %d 位學生的姓名: ", i);
        scanf_s("%s", name);  // 輸入學生姓名
        printf("請輸入 %s 的成績: ", name);
        scanf_s("%d", &score);  // 輸入學生成績

        // 格式化輸出學生姓名和成績到檔案
        fprintf(fp, "%d => %s\n", score, name);
    }

    printf("寫入檔案結束!\n");

    // 關閉檔案
    fclose(fp);

    // 開啟讀取檔案
    fp = fopen(fname, "r");
    if (fp != NULL) {
        printf("檔案內容: \n");

        // 讀取檔案內容並顯示
        while (fscanf(fp, "%d => %s", &score, name) != EOF) {
            printf("姓名: %s, 成績: %d\n", name, score);
        }

        // 關閉檔案
        fclose(fp);
    }
    else {
        printf("錯誤: 檔案開啟錯誤..\n");
    }

    return 0;
}
