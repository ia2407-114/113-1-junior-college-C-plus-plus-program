#include <stdio.h>

// 定義結構體 my_cs
struct my_cs {
    char name[20];
    int id;
    int math;
    int computer;
    float avg;
};

int main(void)
{
    FILE* cfPtr = NULL; // 檔案指標

    // 使用 fopen_s 開啟檔案
    if (fopen_s(&cfPtr, "score.dat", "wb") != 0) {
        puts("File could not be opened.");
        return 1; // 無法開啟檔案，結束程式
    }

    // 建立空的 my_cs 結構體
    struct my_cs blankClient = { "", 0, 0, 0, 0.0f };

    // 寫入 100 筆空的紀錄到檔案
    for (unsigned int i = 0; i < 100; ++i) {
        size_t result = fwrite(&blankClient, sizeof(struct my_cs), 1, cfPtr);
        if (result != 1) {
            puts("Write error occurred.");
            fclose(cfPtr);
            return 1; // 寫入失敗，結束程式
        }
    }

    fclose(cfPtr); // 關閉檔案
    puts("File created successfully.");
    return 0; // 程式成功結束
}