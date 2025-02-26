/*題目4. 修改上述程式碼，用格式化函數來寫入學生姓名與成績，並且讀取出來印到螢幕中。*/
#include <stdio.h>

int main()
{
    FILE* fp;
    char fname[20] = "phones.txt";
    char str0[50] = "lin yuqi";   // 學生姓名
    char str1[50] = "78";         // 數學成績
    char str2[50] = "86";         // 計算機成績

    // 開啟檔案進行寫入
    if (fopen_s(&fp, fname, "w") != 0) {
        printf("錯誤: 無法開啟檔案進行寫入。\n");
        return 1;
    }

    printf("開始寫入檔案 %s..\n", fname);

    // 使用 fprintf 格式化輸出資料到檔案
    fprintf(fp, "姓名 => %s\n", str0);
    fprintf(fp, "數學 => %s\n", str1);
    fprintf(fp, "電腦 => %s\n", str2);

    printf("寫入檔案結束!\n");

    // 關閉寫入檔案
    fclose(fp);

    // 開啟檔案進行讀取
    if (fopen_s(&fp, fname, "r") != 0) {
        printf("錯誤: 無法開啟檔案進行讀取。\n");
        return 1;
    }

    // 讀取檔案並顯示內容
    printf("檔案內容: \n");

    // 讀取每一行
    char buffer[50]; // 用來存儲每行的資料
    while (fscanf_s(fp, "%49[^\n]\n", buffer, sizeof(buffer)) != EOF) {
        printf("%s\n", buffer); // 輸出每一行
    }

    // 關閉檔案
    fclose(fp);

    return 0;
}
