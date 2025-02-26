#include <stdio.h>

// studentData 結構定義
struct studentData {
    unsigned int ID; // 學號
    char Name[15]; // 姓名
    double math; // 數學成績
    double computer; // 計算機成績
    double average; // 平均成績
};

int main(void)
{
    FILE* sfPtr; // students.dat 檔案指標

    // fopen_s 開啟檔案；如果檔案無法開啟則退出
    if (fopen_s(&sfPtr, "students.dat", "rb") != 0) {
        puts("File could not be opened.");
    }
    else {
        printf("%-6s%-16s%-10s%-10s%10s\n", "ID", "Name",
            "Math", "Computer", "Average");

        // read all records from file (until eof)
        while (!feof(sfPtr)) {
            // create studentData with default information
            struct studentData student = { 0, "", 0.0, 0.0, 0.0 };

            int result = fread(&student, sizeof(struct studentData), 1, sfPtr);

            // display record
            if (result != 0 && student.ID != 0) {
                printf("%-6d%-16s%-10.2f%-10.2f%10.2f\n",
                    student.ID, student.Name,
                    student.math, student.computer, student.average);
            }
        }

        fclose(sfPtr); // fclose 關閉檔案
    }
}