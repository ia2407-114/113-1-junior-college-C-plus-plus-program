﻿#include <stdio.h>
#include <string.h>

#define SIZE 5

typedef struct {
    char name[50];
    int id;
    int math_score;
    int computer_score;
    float average;
} Student;

// 函式原型宣告
void sort_students(Student students[], int len);
void swap_students(Student* student1, Student* student2);
void print_report(Student students[], int len);

int main(void) {
    Student students[SIZE];

    // 讀取學生資料
    for (int i = 0; i < SIZE; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf_s("%s", students[i].name, 19);

        printf("Enter ID for student %d: ", i + 1);
        scanf_s("%d", &students[i].id);

        printf("Enter math score for student %d: ", i + 1);
        scanf_s("%d", &students[i].math_score);

        printf("Enter computer score for student %d: ", i + 1);
        scanf_s("%d", &students[i].computer_score);

        // 計算平均成績
        students[i].average = (students[i].math_score + students[i].computer_score) / 2.0f;
    }

    // 列印原始報表
    printf("\nOriginal Data:\n");
    print_report(students, SIZE);

    // 按平均成績排序
    sort_students(students, SIZE);

    // 列印排序後報表
    printf("\nData in Descending Order by Average Score:\n");
    print_report(students, SIZE);

    return 0;
}

// 根據平均成績由大到小排序
void sort_students(Student students[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                swap_students(&students[j], &students[j + 1]);
            }
        }
    }
}

// 交換兩個學生的資料
void swap_students(Student* student1, Student* student2) {
    Student temp = *student1;
    *student1 = *student2;
    *student2 = temp;
}

// 列印學生資料報表
void print_report(Student students[], int len) {
    printf("Name\t\tID\tMath\tComputer\tAverage\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < len; i++) {
        printf("%-10s\t%d\t%d\t%d\t\t%.2f\n",
            students[i].name,
            students[i].id,
            students[i].math_score,
            students[i].computer_score,
            students[i].average);
    }
}