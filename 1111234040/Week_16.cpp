#include <stdio.h>
#include <string.h>

#define SIZE 5

typedef struct {
    char name[50];
    int ID;
    int math;
    int comput;
    float average;
} Student;

void sort_students(Student students[], int len);
void swap_students(Student* student1, Student* student2);

int main(void) {
    Student students[SIZE];

    // Input data for students
    for (int i = 0; i < SIZE; ++i) {
        printf("Input name: ");
        scanf_s("%s", students[i].name,19);
        printf("Input ID: ");
        scanf_s("%d", &students[i].ID);
        printf("Input Math score: ");
        scanf_s("%d", &students[i].math);
        printf("Input Computer score: ");
        scanf_s("%d", &students[i].comput);

        // Calculate average score
        students[i].average = (students[i].math + students[i].comput) / 2.0;
    }

    // Print original list
    puts("\nData items in original order:");
    printf("%-10s %-10s %-10s %-10s %-10s\n", "Name", "ID", "Math", "Computer", "Average");
    for (int i = 0; i < SIZE; ++i) {
        printf("%-10s %-10d %-10d %-10d %-10.2f\n",
            students[i].name,
            students[i].ID,
            students[i].math,
            students[i].comput,
            students[i].average);
    }

    // Sort students by average score in descending order
    sort_students(students, SIZE);

    // Print sorted list
    puts("\nData items in descending order by average score:");
    printf("%-10s %-10s %-10s %-10s %-10s\n", "Name", "ID", "Math", "Computer", "Average");
    for (int i = 0; i < SIZE; ++i) {
        printf("%-10s %-10d %-10d %-10d %-10.2f\n",
            students[i].name,
            students[i].ID,
            students[i].math,
            students[i].comput,
            students[i].average);
    }

    return 0;
}

void sort_students(Student students[], int len) {
    for (int pass = 0; pass < len - 1; ++pass) {
        for (int i = 0; i < len - pass - 1; ++i) {
            if (students[i].average < students[i + 1].average) {
                swap_students(&students[i], &students[i + 1]);
            }
        }
    }
}

void swap_students(Student* student1, Student* student2) {
    Student temp = *student1;
    *student1 = *student2;
    *student2 = temp;
}
