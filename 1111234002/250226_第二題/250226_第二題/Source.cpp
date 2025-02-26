/*題目2.  利用第二個程式碼，將學生的資料完整印出*/
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

    // 嘗試開啟檔案，如果無法開啟則顯示錯誤訊息並退出
    if (fopen_s(&cfPtr, "studentData.dat", "rb") != 0) {
        puts("File could not be opened.");
        return 1; // 無法開啟檔案，退出程式
    }

    // 顯示標題行
    printf("%-6s%-16s%-11s%-10s%-10s%-10s\n", "ID", "Last Name", "First Name", "Math", "Comput", "Average");

    // 讀取所有資料（直到檔案結尾）
    struct studentData student;
    while (fread(&student, sizeof(struct studentData), 1, cfPtr) == 1) {
        // 顯示學生資料，忽略學號為 0 的紀錄
        if (student.ID != 0) {
            printf("%-6d%-16s%-11s%-10d%-10d%-10.2f\n",
                student.ID, student.lastName, student.firstName,
                student.math, student.comput, student.avg);
        }
    }

    fclose(cfPtr); // 關閉檔案
    return 0;
}
