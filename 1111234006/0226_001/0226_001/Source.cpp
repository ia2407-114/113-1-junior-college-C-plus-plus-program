/*題目1.將學生結構放入範例程式碼中，根據學號 ID，透過鍵盤將資料寫入檔案中，要記得將上衣周產生的空白檔案複製到新的專案目錄中*/
#include <stdio.h>

// 定義結構體 clientData，用來儲存學生資料
struct clientData {
    unsigned int ID;        // 學號 (ID)
    char Name[15];          // 姓名 (最多 14 字符 + 結束符 '\0')
    char math, computer;    // 數學成績與計算機成績（使用 char 類型儲存 0-100 的分數）
    double balance;         // 學生餘額（可以是浮點數）
};

int main(void)
{
    FILE* cfPtr = NULL; // 宣告檔案指標
    typedef struct clientData stu; // 讓 struct clientData 可以用 stu 來代替

    // 嘗試以讀取和寫入模式（rb+）開啟檔案，如果無法開啟則報錯
    if (fopen_s(&cfPtr, "accounts.dat", "rb+") != 0) {
        puts("File could not be opened."); // 如果檔案無法開啟，輸出錯誤訊息
    }
    else {
        // 創建一個 clientData 結構體變數並初始化
        struct clientData client = { 0, "", 0, 0, 0.0 };

        // 要求使用者輸入帳號編號 (學號)，學號範圍 1 到 100，0 代表結束輸入
        printf("%s", "Enter account number"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.ID);

        // 當使用者輸入學號不為 0 時，繼續要求輸入學生資料
        while (client.ID != 0) {
            // 要求使用者輸入姓名、數學成績、計算機成績、餘額
            printf("%s", "Enter lastname, firstname, balance: ");

            // 讀取學生的姓名，限制最多 14 個字符
            scanf_s("%14s", client.Name, sizeof(client.Name));
            // 讀取數學成績和計算機成績，並且轉換成 char 型別
            scanf_s("%hhd%hhd%lf", &client.math, &client.computer, &client.balance);

            // 根據學號計算要寫入的位置，將資料寫入檔案
            fseek(cfPtr, (client.ID - 1) *
                sizeof(struct clientData), SEEK_SET);

            // 將學生資料寫入檔案
            fwrite(&client, sizeof(struct clientData), 1, cfPtr);

            // 提示使用者輸入另一個學號，如果學號為 0 則結束輸入
            printf("%s", "Enter account number: ");
            scanf_s("%d", &client.ID);
        }

        fclose(cfPtr); // fclose 關閉檔案
    }
}
