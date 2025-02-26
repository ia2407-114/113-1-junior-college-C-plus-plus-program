/*題目3. 根據前面兩題所建立的資料檔案，寫一個程式，輸入學號後，若學號存在且不為0，則印出該筆完整的資料，否則印出"該筆資料不存在"的訊息。*/
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
    unsigned int inputID; // 用來儲存用戶輸入的學號
    int found = 0; // 標記是否找到該筆資料

    // 嘗試開啟檔案，如果無法開啟則顯示錯誤訊息並退出
    if (fopen_s(&cfPtr, "studentData.dat", "rb") != 0) {
        puts("File could not be opened.");
        return 1; // 檔案開啟失敗，返回錯誤
    }

    // 輸入學號
    printf("Enter student ID to search: ");
    scanf_s("%u", &inputID);

    // 如果學號為 0，則提示資料不存在
    if (inputID == 0) {
        printf("該筆資料不存在。\n");
    }
    else {
        // 讀取檔案中的資料並比對學號
        while (1) {
            struct studentData student = { 0, "", "", 0, 0, 0.0 };

            // 讀取一筆資料
            int result = fread(&student, sizeof(struct studentData), 1, cfPtr);

            // 如果讀取成功且學號匹配，顯示資料
            if (result == 1 && student.ID != 0) {
                if (student.ID == inputID) {
                    printf("%-6s%-16s%-11s%-10s%-10s%-10s\n", "ID", "Last Name", "First Name", "Math", "Comput", "Average");
                    printf("%-6d%-16s%-11s%-10d%-10d%-10.2f\n",
                        student.ID, student.lastName, student.firstName,
                        student.math, student.comput, student.avg);
                    found = 1;
                    break; // 找到資料後停止搜尋
                }
            }
            else if (result != 1) {
                break; // 如果沒有更多資料，跳出循環
            }
        }

        // 如果沒有找到該學號的資料，顯示提示訊息
        if (!found) {
            printf("該筆資料不存在。\n");
        }
    }

    fclose(cfPtr); // 關閉檔案
    return 0;
}