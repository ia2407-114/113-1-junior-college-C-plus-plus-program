#include <stdio.h>


struct stuData {
    char Name[50]; 
    double math;  
    double computer;
};

int main()
{
    FILE* fp;  
    char fname[20] = "students.txt";
    struct stuData stu1 = { "Alice", 95.5, 89.0 };
    struct stuData stu2 = { "Bob", 85.0, 92.5 };
    struct stuData stu3 = { "Charlie", 78.5, 88.0 };

    if (fopen_s(&fp, fname, "w") != 0) {  
        printf("錯誤: 檔案開啟錯誤..\n");
        return 1;
    }

    printf("開始寫入檔案%s..\n", fname);
  
    fprintf(fp, "%s,%.2f,%.2f\n", stu1.Name, stu1.math, stu1.computer);
    fprintf(fp, "%s,%.2f,%.2f\n", stu2.Name, stu2.math, stu2.computer);
    fprintf(fp, "%s,%.2f,%.2f\n", stu3.Name, stu3.math, stu3.computer);
    printf("寫入檔案結束!\n");
    fclose(fp); 

    if (fopen_s(&fp, fname, "r") != 0) {  
        printf("錯誤: 檔案開啟錯誤..\n");
        return 1;
    }

    printf("檔案內容: \n");
    char line[100];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}
