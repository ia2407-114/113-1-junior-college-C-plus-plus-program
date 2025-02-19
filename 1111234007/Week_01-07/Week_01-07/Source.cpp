//將學生結構放入範例程式碼中，修改為建立100筆空白學生資料
// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

// studentData structure definition            
typedef struct studentData { //定義結構
    int ID; 
    char Name[20];        
    int math, comput;    
    float AVG;               
} Student;

int main(void)
{
    FILE* studentPtr = NULL;  //第一步:建立檔案指標

    // fopen 打開檔案；如果無法開啟檔案，則退出程式
    if ((fopen_s(&studentPtr, "students.dat", "wb")) != 0) {  //第二步:開啟檔案
        puts("File could not be opened.");
    }
    else {
        // 創建 studentData 結構，並使用預設值初始化
        Student blankStudent = { 0, "",0,0,0.0};

        // 輸出 100 筆空白的學生資料到檔案中
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankStudent, sizeof(Student), 1, studentPtr); //第三步:存/取檔案
        }

        fclose(studentPtr); //第四步:關閉檔案
    }
}
