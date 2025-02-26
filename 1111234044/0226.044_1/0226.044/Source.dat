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

    // 以二進位寫入模式開啟檔案
    if ((fPtr = fopen("students.dat", "wb")) == NULL) {
        puts("檔案無法開啟！");
        return 1;
    }

    printf("請輸入學生資料（輸入 0 結束）\n");

    // 讓使用者輸入學生資料
    while (1) {
        printf("學號 (0 退出): ");
        scanf_s("%u", &student.id);
        if (student.id == 0) break; // 若輸入 0 則結束輸入

        printf("姓氏: ");
        scanf("%s", student.lastName);
        printf("名字: ");
        scanf("%s", student.firstName);
        printf("年齡: ");
        scanf("%u", &student.age);
        printf("GPA: ");
        scanf("%lf", &student.gpa);

        // 將資料寫入檔案
        fwrite(&student, sizeof(struct Student), 1, fPtr);
    }

    fclose(fPtr); // 關閉檔案
    puts("學生資料已儲存到 students.dat。");

    return 0;
}
