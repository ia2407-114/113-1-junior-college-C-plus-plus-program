#include <stdio.h>

typedef struct student {   // 定義結構來儲存學生資料
    int     ID;            // 學生學號
    char    name[20];      // 學生姓名，最多 20 個字元
    int     math;          // 數學成績
    int     comput;        // 計算機成績
    float   AVG;           // 學生的平均成績
} stu;

int main(void)
{
    FILE* cfPtr; // 指向檔案的指標

    // 嘗試以二進位讀寫模式 (rb+) 打開檔案，如果無法開啟，則退出
    if ((fopen_s(&cfPtr, "accounts.dat", "rb+")) != 0) { // 修改fopen_s語法
        puts("檔案無法開啟。");
    }
    else {
        struct student client = { 0, "", 0, 0, 0.0 }; // 初始化結構體 client

        // 提示使用者輸入學號
        printf("請輸入學號（1 至 100，輸入 0 結束輸入）：");
        scanf_s("%d", &client.ID);  // 讀取學號

        // 當學號不為 0 時，繼續進行資料輸入
        while (client.ID != 0) {

            // 提示使用者輸入姓名、數學成績與電腦成績
            printf("請輸入姓名、數學成績與計算機成績：");

            // 使用 fscanf_s 從鍵盤讀取使用者輸入的資料
            // 需要額外傳入名字大小
            fscanf_s(stdin, "%14s", client.name, (unsigned)_countof(client.name));  // 加上字串最大長度
            fscanf_s(stdin, "%d%d", &client.math, &client.comput);  // 讀取數學和計算機成績

            // 計算平均成績
            client.AVG = (client.math + client.comput) / 2.0;

            // 移動檔案指標到對應學號的位置
            fseek(cfPtr, (client.ID - 1) * sizeof(struct student), SEEK_SET);

            // 寫入資料到檔案
            fwrite(&client, sizeof(struct student), 1, cfPtr);

            // 再次提示用戶輸入學號
            printf("請輸入學號（1 至 100，輸入 0 結束輸入）：");
            scanf_s("%d", &client.ID);  // 讀取學號
        }

        fclose(cfPtr); // 關閉檔案
    }
}
