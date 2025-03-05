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
    struct stuData stu1, stu2, stu3;

 
    printf("輸入學生1的姓名：");
    scanf_s("%49s", stu1.Name, sizeof(stu1.Name));
    printf("輸入學生1的數學成績：");
    scanf_s("%lf", &stu1.math);
    printf("輸入學生1的計算機成績：");
    scanf_s("%lf", &stu1.computer);

   
    printf("輸入學生2的姓名：");
    scanf_s("%49s", stu2.Name,sizeof(stu2.Name));
    printf("輸入學生2的數學成績：");
    scanf_s("%lf", &stu2.math);
    printf("輸入學生2的計算機成績：");
    scanf_s("%lf", &stu2.computer);

  
    printf("輸入學生3的姓名：");
    scanf_s("%49s", stu3.Name,sizeof(stu3.Name));
    printf("輸入學生3的數學成績：");
    scanf_s("%lf", &stu3.math);
    printf("輸入學生3的計算機成績：");
    scanf_s("%lf", &stu3.computer);

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
