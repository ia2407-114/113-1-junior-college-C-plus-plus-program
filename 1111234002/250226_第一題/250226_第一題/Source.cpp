/*題目1.  將學生結構放入範例程式碼中，根據學號 ID，透過鍵盤將資料寫入檔案中，要記得將上衣周產生的空白檔案複製到新的專案目錄中*/
#include <stdio.h>

// 定義學生資料結構
struct studentData {
    unsigned int ID;       // 學生學號
    char lastName[15];     // 姓氏（最多 14 個字元）
    char firstName[10];    // 名字（最多 9 個字元）
    int math;              // 數學成績
    int comput;            // 計算機成績
    float avg;             // 平均成績
};

int main(void)
{
    FILE* cfPtr; // studentData.dat 檔案指標
    struct studentData student = { 0, "", "", 0, 0, 0.0 }; // 初始化學生資料
    unsigned int inputID; // 用來儲存用戶輸入的學號

    // 嘗試開啟檔案，如果無法開啟則顯示錯誤訊息並退出
    if (fopen_s(&cfPtr, "studentData.dat", "rb+")) {
        // 如果檔案不存在，則創建一個新檔案
        if (fopen_s(&cfPtr, "studentData.dat", "wb+")) {
            puts("File could not be opened.");
            return 1;
        }
    }

    // 輸入學號
    printf("%s", "Enter student ID (1 to 100, 0 to end input): ");
    scanf_s("%u", &student.ID);

    // 用戶輸入資料並寫入檔案
    while (student.ID != 0) {
        // 用戶輸入學生資料
        printf("Enter last name, first name, math score, comput score, and average score: ");
        fscanf_s(stdin, "%14s %9s %d %d ", student.lastName, sizeof(student.lastName), student.firstName, sizeof(student.firstName), &student.math, &student.comput);

        // 使用 fseek 定位到指定的學生學號位置
        fseek(cfPtr, (student.ID - 1) * sizeof(struct studentData), SEEK_SET);

        // 寫入學生資料到檔案
        fwrite(&student, sizeof(struct studentData), 1, cfPtr);

        // 提示用戶輸入下一個學號
        printf("%s", "Enter student ID (1 to 100, 0 to end input): ");
        scanf_s("%u", &student.ID);
    }

    fclose(cfPtr); // 關閉檔案
    return 0;
}

