#include <stdio.h>


struct studentData {
    unsigned int ID;
    char Name[15];
    double math;
    double computer;
    double average;
};

int main(void)
{
    FILE* sfPtr;


    if (fopen_s(&sfPtr, "students.dat", "rb+") != 0) {
        puts("File could not be opened.");
    }
    else {

        struct studentData student = { 0, "", 0.0, 0.0, 0.0 };

        // 要求使用者指定學號
        printf("%s", "Enter student ID (1 to 100, 0 to end input): ");
        scanf_s("%d", &student.ID);

        // 使用者輸入資訊，將資訊複製到檔案中
        while (student.ID != 0) {
            // 使用者輸入姓名、數學成績、計算機成績和平均成績
            printf("%s", "Enter Name, math grade, computer grade: ");

            // 設定記錄的 Name、math、computer 和 average 值
            scanf_s("%14s%lf%lf", student.Name, sizeof(student.Name), &student.math, &student.computer);

            // 計算平均成績
            student.average = (student.math + student.computer) / 2.0;

            // 根據使用者指定的記錄位置尋找檔案位置
            fseek(sfPtr, (student.ID - 1) * sizeof(struct studentData), SEEK_SET);

            // 將使用者指定的資訊寫入檔案
            fwrite(&student, sizeof(struct studentData), 1, sfPtr);

            // 允許使用者輸入另一個學號
            printf("%s", "Enter student ID: ");
            scanf_s("%d", &student.ID);
        }

        fclose(sfPtr); // fclose 關閉檔案
    }
}