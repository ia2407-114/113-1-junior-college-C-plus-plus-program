/*題目2，根據學號 ID，透過鍵盤將資料寫入檔案中*/

#include <stdio.h>
typedef struct student {
    int id;           // 學生 ID
    char name[20];    // 學生姓名
    int math;         // 數學成績
    int comput;       // 計算機成績
    float avg;        // 平均分數
} stu;

int main(void) {
    FILE* cfPtr;              // 定義檔案指標
    stu stuData = { 0, "", 0, 0, 0.0f }; // 初始化學生資料

    // 嘗試以 "rb+" 模式開啟檔案 (讀寫模式，不會創建新檔案)
    // 若檔案不存在，則改為 "wb+" 模式來創建檔案
    if (fopen_s(&cfPtr, "stu002.dat", "rb+") != 0) {
        fopen_s(&cfPtr, "stu002.dat", "wb+"); // 若檔案不存在，則建立新檔案
    }

    // 檢查檔案是否成功開啟
    if (cfPtr == NULL) {
        puts("檔案無法開啟"); // 顯示錯誤訊息
        return 1; // 結束程式
    }

    // 提示使用者輸入學生 ID，若輸入 0 則退出
    printf("請輸入學生 ID (輸入 0 退出): ");
    scanf_s("%d", &stuData.id);

    // 當使用者輸入的 ID 不為 0 時，持續輸入學生資料
    while (stuData.id != 0) {
        // 檢查 ID 是否小於 1，若無效則提示重新輸入
        if (stuData.id < 1) {
            puts("無效的學生 ID，請重新輸入");
            printf("請輸入學生 ID (輸入 0 退出): ");
            scanf_s("%d", &stuData.id);
            continue; // 跳過當前迴圈，重新輸入
        }

        // 輸入學生姓名、數學成績、計算機成績
        printf("請輸入姓名、數學成績、計算機成績: ");
        scanf_s("%19s", stuData.name, sizeof(stuData.name));// 限制字串長度，避免溢位
        scanf_s("%d", &stuData.math); // 輸入數學成績
        scanf_s("%d", &stuData.comput); // 輸入計算機成績

        // 自動計算平均分數
        stuData.avg = (stuData.math + stuData.comput) / 2.0f;

        // 定位到檔案對應位置，根據學生 ID 存入 (ID 從 1 開始，因此需要減 1)
        fseek(cfPtr, (stuData.id - 1) * sizeof(stu), SEEK_SET);
        fwrite(&stuData, sizeof(stu), 1, cfPtr); // 將學生資料寫入檔案

        // 提示使用者輸入下一個學生 ID
        printf("請輸入學生 ID (輸入 0 退出): ");
        scanf_s("%d", &stuData.id);
    }

    // 關閉檔案
    fclose(cfPtr);
    return 0;
}
