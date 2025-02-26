/*題目4.修改上述程式碼，用格式化函數來寫入學生姓名與成績，並且讀取出來印到螢幕中。*/

#include <stdio.h>
int main()
{
    FILE* fp; // 宣告檔案指標
    char fname[20] = "phones.txt"; // 檔案名稱
    char name[50];        // 學生姓名
    char grade[50];       // 學生成績
    char model[50];       // 其他資料（可以是手機型號等）

    // 開啟檔案寫入模式 ("w" 代表寫入模式)
    if (fopen_s(&fp, fname, "w") != 0) {
        printf("無法開啟檔案進行寫入。\n");
        return 1;
    }

    printf("開始寫入檔案 %s..\n", fname);

    // 讓使用者輸入資料
    for (int i = 1; i <= 3; i++) {  // 假設我們輸入3個學生資料
        printf("請輸入第 %d 位學生的姓名: ", i);
        scanf_s("%49s", name, (unsigned)sizeof(name)); // 讀取姓名

        printf("請輸入第 %d 位學生的成績: ", i);
        scanf_s("%49s", grade, (unsigned)sizeof(grade)); // 讀取成績

        printf("請輸入第 %d 位學生的手機型號或其他資料: ", i);
        scanf_s("%49s", model, (unsigned)sizeof(model)); // 讀取其他資料

        // 格式化輸出資料到檔案
        fprintf(fp, "學生 %d: 姓名 => %s, 成績 => %s, 手機型號 => %s\n", i, name, grade, model);
    }

    printf("寫入檔案結束!\n");
    fclose(fp); // 關閉檔案

    // 開啟檔案讀取模式 ("r" 代表讀取模式)
    if (fopen_s(&fp, fname, "r") != 0) {
        printf("錯誤: 檔案開啟錯誤..\n");
        return 1;
    }

    // 讀取檔案內容並顯示
    printf("檔案內容: \n");
    while (fscanf_s(fp, "%49s", name, (unsigned)sizeof(name)) != EOF) {  // 使用 sizeof 來指定最大長度
        printf("%s\n", name);  // 顯示讀取到的每一行資料
    }

    fclose(fp); // 關閉檔案

    return 0;
}
