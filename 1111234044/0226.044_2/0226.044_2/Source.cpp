#include <stdio.h>

// 定義學生結構
struct Student {
    unsigned int id;      // 學號
    char lastName[15];    // 姓氏
    char firstName[10];   // 名字
    unsigned int age;     // 年齡
    double gpa;           // GPA
};

int main(void) {
    FILE* fPtr; // 檔案指標
    struct Student student = { 0, "", "", 0, 0.0 }; // 初始化學生結構

    // 以二進位讀取模式開啟檔案
    if ((fPtr = fopen("students.dat", "rb")) == NULL) {
        puts("檔案無法開啟！");
        return 1;
    }

    // 顯示表頭
    printf("%-6s%-16s%-11s%-6s%6s\n", "ID", "Last Name", "First Name", "Age", "GPA");

    // 讀取並顯示學生資料
    while (fread(&student, sizeof(struct Student), 1, fPtr) == 1) {
        printf("%-6u%-16s%-11s%-6u%6.2f\n",
            student.id, student.lastName, student.firstName,
            student.age, student.gpa);
    }

    fclose(fPtr); // 關閉檔案

    return 0;
}
