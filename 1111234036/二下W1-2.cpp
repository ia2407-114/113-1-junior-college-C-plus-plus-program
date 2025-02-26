#include <stdio.h>

typedef struct student {
    int ID;
    char name[20];
    int math, comput;
    float AVG;
} stu;

int main(void) {
    FILE* cfPtr = NULL;

    // 開啟檔案，進行讀寫 (r+b)
    if (fopen_s(&cfPtr, "accounts.dat", "r+b") != 0) {
        puts("File could not be opened.");
        return 1; // 結束程式
    }

    stu newStudent;
    int inputID;

    // 讓使用者輸入學號
    printf("Enter student ID (1-100, 0 to exit): ");
    scanf_s(" %d", &inputID); // 避免換行符問題

    while (inputID != 0) {
        // 檢查 ID 是否有效
        if (inputID < 1 || inputID > 100) {
            printf("Invalid ID! Enter a number between 1-100.\n");
        }
        else {
            newStudent.ID = inputID;

            // 清除輸入緩衝區，避免影響 `scanf`
            while (getchar() != '\n');

            printf("Enter name: ");
            scanf(" %[^\n]", newStudent.name); // 讀取完整姓名，支援空格

            printf("Enter math score: ");
            scanf_s(" %d", &newStudent.math);

            printf("Enter computer score: ");
            scanf_s(" %d", &newStudent.comput);

            // 計算平均成績
            newStudent.AVG = (newStudent.math + newStudent.comput) / 2.0;

            // 移動檔案指標
            fseek(cfPtr, (inputID - 1) * sizeof(stu), SEEK_SET);

            // 寫入該筆資料
            fwrite(&newStudent, sizeof(stu), 1, cfPtr);

            printf("Data for student %d saved!\n\n", inputID);
        }

        // 讓使用者輸入下一筆資料
        printf("Enter student ID (1-100, 0 to exit): ");
        scanf_s(" %d", &inputID);
    }

    fclose(cfPtr);
    puts("Data entry complete.");
    return 0;
}