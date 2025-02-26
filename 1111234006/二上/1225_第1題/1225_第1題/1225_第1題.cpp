// 1225-題目1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
/*題目1. 請修改這程式，將陣列換成結構陣列，包含學生的姓名、學號、數學、電腦成績、以及平均成績，
先印出一份排序前的名單，並呼叫排序程式依據平均成績將結構列內容由大到小排序，完成後由主程式印出結果。

題目2. 承上題，再加上一個報表列印副程式，將結構陣列傳遞過去後，
印出結構內的資料包含學生的姓名、學號、數學、電腦成績、以及平均成績。*/

// Fig. 6.15: fig06_15.c
// 將陣列的值按照升序排序。
#include <stdio.h>
#define SIZE 5

// 結構定義
typedef struct student {
    char name[20]; // 學生姓名
    int id;        // 學號
    int math;      // 數學成績
    int comput;    // 電腦成績
    float avg;     // 平均成績
} stu;

// 函數宣告
void inputStudents(stu students[], int size);
void sortByAverage(stu students[], int size);
void swapStudents(stu* a, stu* b);
void printReport(const stu students[], int size);

int main(void) {
    stu my_class[SIZE]; // 宣告結構陣列

    // 輸入學生資料
    inputStudents(my_class, SIZE);

    // 顯示排序前的名單
    puts("排序前的名單：");
    printReport(my_class, SIZE);

    // 排序學生資料依平均成績由大到小
    sortByAverage(my_class, SIZE);

    // 顯示排序後的名單
    puts("\n排序後的名單：");
    printReport(my_class, SIZE);

    return 0;
}

// 輸入學生資料
void inputStudents(stu students[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("輸入學生 %d 的姓名: ", i + 1);
        scanf_s("%s", students[i].name); // 輸入姓名
        printf("輸入學號: ");
        scanf_s("%d", &students[i].id); // 輸入學號
        printf("輸入數學成績: ");
        scanf_s("%d", &students[i].math); // 輸入數學成績
        printf("輸入電腦成績: ");
        scanf_s("%d", &students[i].comput); // 輸入電腦成績

        // 計算平均成績
        students[i].avg = (float)(students[i].math + students[i].comput) / 2.0;
    }
}

// 排序學生依平均成績由大到小
void sortByAverage(stu students[], int size) {
    for (int pass = 0; pass < size - 1; ++pass) {
        for (int i = 0; i < size - 1 - pass; ++i) {
            if ((students + i)->avg < (students + i + 1)->avg) {
                swapStudents(&students[i], &students[i + 1]);
            }
        }
    }
}

// 交換兩個學生的結構資料
void swapStudents(stu* a, stu* b) {
    stu temp = *a;
    *a = *b;
    *b = temp;
}

// 列印學生報表
void printReport(const stu students[], int size) {
    printf("%-10s %-10s %-10s %-10s %-10s\n", "姓名", "學號", "數學", "電腦", "平均");
    for (int i = 0; i < size; ++i) {
        printf("%-10s %-10d %-10d %-10d %-10.2f\n",
            students[i].name,
            students[i].id,
            students[i].math,
            students[i].comput,
            students[i].avg);
    }
}