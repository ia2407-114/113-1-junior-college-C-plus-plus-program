/*題目1. 將學生結構放入範例程式碼中替代原先的結構再加上自我參考指標，透過鍵盤輸入4筆學生資料，根據學號 ID插入鏈結串列中，最後將鏈結串列的內容印出。*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定義學生結構
struct student {
    int id; // 學號
    char name[50]; // 學生姓名
    struct student* nextPtr; // 自我參考指標
};

typedef struct student Student; // 定義學生結構類型
typedef Student* StudentPtr; // 定義學生指標類型

// 函式原型
void insert(StudentPtr* sPtr, int id, char name[]);
void printList(StudentPtr currentPtr);
void instructions(void);

int main(void) {
    StudentPtr startPtr = NULL; // 初始時，沒有學生資料
    int id;
    char name[50];

    instructions(); // 顯示選單

    // 讀入4筆學生資料
    for (int i = 0; i < 4; i++) {
        printf("輸入第 %d 位學生資料：\n", i + 1);
        printf("學號：");
        scanf_s("%d", &id);
        getchar();  // 用來消除換行符號
        printf("姓名：");
        fgets(name, sizeof(name), stdin); // 讀取姓名，包含空格
        name[strcspn(name, "\n")] = 0; // 去掉末尾的換行符

        insert(&startPtr, id, name); // 插入學生資料到鏈結串列
    }

    printf("\n學生資料鏈結串列：\n");
    printList(startPtr); // 打印鏈結串列的內容

    return 0;
}

// 顯示選單
void instructions(void) {
    puts("輸入你的選擇:\n"
        "   1 插入學生資料到鏈結串列中。\n"
        "   2 查看鏈結串列中的學生資料。\n");
}

// 根據學號插入學生資料，保持排序
void insert(StudentPtr* sPtr, int id, char name[]) {
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student)); // 分配內存

    if (newPtr != NULL) {
        newPtr->id = id; // 設置學號
        strcpy_s(newPtr->name, name); // 複製姓名
        newPtr->nextPtr = NULL; // 新節點的 nextPtr 設為 NULL

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        // 找到適當的插入位置，根據學號大小排序
        while (currentPtr != NULL && id > currentPtr->id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        // 如果在鏈結串列開頭插入
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { // 插入到鏈結串列的中間或末尾
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("無法分配內存。\n");
    }
}

// 打印鏈結串列
void printList(StudentPtr currentPtr) {
    if (currentPtr == NULL) {
        puts("鏈結串列為空。\n");
    }
    else {
        while (currentPtr != NULL) {
            printf("學號: %d, 姓名: %s\n", currentPtr->id, currentPtr->name);
            currentPtr = currentPtr->nextPtr;
        }
        puts(""); // 換行
    }
}