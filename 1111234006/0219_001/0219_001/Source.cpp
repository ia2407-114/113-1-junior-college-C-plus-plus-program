/*題目1， 將學生結構放入範例程式碼中，修改為建立100筆空白學生資料*/
#include <stdio.h>

typedef struct student {   //定義結構
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;

int main(void)
{
    FILE* cfPtr=NULL;   // 定義檔案指標，用於指向 accounts.dat 文件

    if ((fopen_s (&cfPtr,"accounts.dat", "wb"))!=0) {
        puts("無法開啟文件。"); // 輸出錯誤訊息
    }
    else {
        // 建立一個預設的 student 結構，所有欄位初始化為空
        student blankClient = { 0,"",0,0,0.0};

        // 向文件寫入 100 筆空白紀錄
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(struct student), 1, cfPtr);
        }

        fclose(cfPtr); // 關閉文件
    }
}
