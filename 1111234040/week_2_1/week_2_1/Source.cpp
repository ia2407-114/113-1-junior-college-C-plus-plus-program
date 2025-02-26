#include <stdio.h>

int main()
{
    FILE* fp;  /* 宣告檔案指標 */
    char fname[20] = "students.txt";
    char name1[50] = "Alice";
    int math = 95;
    char name2[50] = "Bob";
    int computer = 88;
    float avg;
    avg = ((math + computer) / 2);
    fopen_s(&fp,fname, "w");   /* 開啟寫入檔案 */
    if (fp == NULL) {
        printf("錯誤: 檔案開啟錯誤..\n");
        return 1;
    }

    printf("開始寫入檔案%s..\n", fname);
    
    /* 格式化輸出學生姓名與成績 */
    fprintf(fp, "姓名: %s, 成績: %d\n", name1, math);
    fprintf(fp, "姓名: %s, 成績: %d\n", name2, computer);
    fprintf(fp, " 成績: % d\n", avg);

    printf("寫入檔案結束!\n");
    fclose(fp); /* 關閉檔案 */

     fopen_s(&fp,fname, "r");   /* 開啟讀取檔案 */
    if (fp != NULL) {         /* 讀取檔案 */
        char buffer[100];
        printf("檔案內容: \n");
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            printf("%s", buffer);
        }
        fclose(fp); /* 關閉檔案 */
    }
    else {
        printf("錯誤: 檔案開啟錯誤..\n");
    }

    return 0;
}
