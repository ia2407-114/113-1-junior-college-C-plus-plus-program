// Fig. 11.10: fig11_10.c
/*題目1， 將學生結構放入範例程式碼中，修改為建立100筆空白學生資料
題目2.  根據學號 ID，透過鍵盤將資料寫入檔案中*/
// 創建一個隨機存取檔案並順序寫入
#include <stdio.h>


typedef struct student {   //定義結構
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;

int main(void)
{
    FILE* cfPtr=NULL; // accounts.dat 檔案指標

    // fopen 打開檔案，如果檔案無法開啟則退出
    if ((fopen_s(& cfPtr, "accounts.dat", "wb")) !=0) {
        puts("無法開啟檔案。");
    }
    else {
        // 創建一個包含預設資料的 clientData
        struct student blankClient = { 0, "", 0,0, 0.0 };

        // 輸出100條空白記錄到檔案
        for ( int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(struct student), 1, cfPtr);
        }

        fclose(cfPtr); // 關閉檔案
    }
}
                                                                         