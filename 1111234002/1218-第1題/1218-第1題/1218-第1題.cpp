
/*題目1. 請根據上一週的程式碼，
運用"指標陣列"的方式透過鍵盤輸入學生姓名放入二維的字元陣列中，透過排序副程式將學號、成績陣列以及字串陣列傳過去，
並將學生成績由小到大排序，並適當交換姓名與學號，再由主程式印出。*/

/*題目2. (呈上題) 請寫出一個交換副程式，專門負責排序時交換學生姓名，
將兩位要互換姓名的字串指標傳入到該副程式中，透過指標變數交換，完成字串姓名的內容交換。*/

/*題目3. (承上題)請請使用函數指標，並寫出acending(遞增)與descending(遞減)副程式，
在呼叫排序副程式時，將上指標參數，指向你所需要的排序副程式(ascending或descending)，完成想要的排序順序。*/


#include <stdio.h>
#include <string.h>

#define SIZE 5

// 函式原型
int sort_score(int a[2][SIZE], int len, int (*compare)(int, int));  // 排序函數，接受比較函數指標
int ascending(int a, int b);  // 遞增排序的比較函數
int descending(int a, int b); // 遞減排序的比較函數
void swap(int* x, int* y);  // 交換學號和成績的函數
void s_name(char* name[SIZE], int len, int a[2][SIZE], int (*compare)(int, int));  // 交換姓名的函數

int main(void) {
    int a[2][SIZE] = { 0 };  // 學號和成績的二維陣列
    char* name[SIZE];        // 學生姓名的指標陣列
    char sore_name[SIZE][15]; // 學生姓名的二維陣列，用來儲存每個學生的姓名
    int mid;                 // 中位數的變數

    // 輸入學號、成績和姓名
    for (size_t i = 0; i < SIZE; ++i) {
        printf("Input ID: ");
        scanf_s("%d", &a[0][i]);  // 輸入學號
        printf("Input score: ");
        scanf_s("%d", &a[1][i]);  // 輸入成績
        printf("Input name: ");
        scanf_s("%s", sore_name[i], 15);  // 輸入姓名
        name[i] = sore_name[i];  // 讓指標 name[i] 指向 sore_name[i]
    }

    // 輸出原始順序
    printf("\n學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);
    printf("\n姓名 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", name[i]);

    // 呼叫排序函數並取得中位數，傳遞ascending函數指標
    mid = sort_score(a, SIZE, ascending);  // 遞增排序
    s_name(name, SIZE, a, ascending);      // 交換姓名

    puts("\n\n遞增排序\n");

    // 輸出排序後的資料
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);
    printf("\n姓名 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", name[i]);

    // 輸出中位數
    printf("\n\n中位數: %d\n", mid);

    // 呼叫排序函數並取得中位數，傳遞descending函數指標
    mid = sort_score(a, SIZE, descending);  // 遞減排序
    s_name(name, SIZE, a, descending);      // 交換姓名

    printf("\n\n遞減排序\n");

    // 輸出排序後的資料
    printf("學號 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[0][i]);
    printf("\n成績 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4d", a[1][i]);
    printf("\n姓名 ");
    for (size_t i = 0; i < SIZE; ++i)
        printf("%4s", name[i]);

    // 輸出中位數
    printf("\n\n中位數: %d\n", mid);

    return 0;
}

// 排序函數，接受一個比較函數指標
int sort_score(int a[2][SIZE], int len, int (*compare)(int, int)) {
    for (int pass = 1; pass < len; ++pass) {  // 使用泡沫排序法
        for (int i = 0; i < len - 1; ++i) {
            if ((*compare)(a[1][i], a[1][i + 1])) {  // 根據比較結果決定是否交換
                swap(&a[1][i], &a[1][i + 1]); // 交換分數
                swap(&a[0][i], &a[0][i + 1]); // 交換學號
            }
        }
    }
    return a[1][len / 2]; // 返回中位數（成績）
}


int ascending(int a, int b) {
    return a > b;  // 遞增排序
}


int descending(int a, int b) {
    return b > a;  // 遞減排序
}

// 交換姓名函數
void s_name(char* name[SIZE], int len, int a[2][SIZE], int (*compare)(int, int)) {
    for (int i = 0; i < len - 1; i++) {
        if ((*compare)(a[1][i], a[1][i + 1])) {  // 當成績小於前一位時，交換姓名
            char* temp = name[i];
            name[i] = name[i + 1];
            name[i + 1] = temp;
        }
    }
}

// 交換學號和成績的函數
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
