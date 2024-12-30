#include <stdio.h>
#include <string.h>
#define SIZE 5

typedef struct {
    char name[20];
    int id;
    int math;
    int comput;
    float avg;
} Student;

void input_students(Student students[], int len);
void print_students(const Student students[], int len);
void sort_students_by_avg(Student students[], int len);
void swap_students(Student* s1, Student* s2);
void print_report(const Student students[], int len);

int main(void) {
    Student my_class[SIZE];

    input_students(my_class, SIZE);

    puts("\n--- �Ƨǫe���W�� ---");
    print_students(my_class, SIZE);

    sort_students_by_avg(my_class, SIZE);

    puts("\n--- �Ƨǫ᪺�W�� (�̥������Z�Ѥj��p) ---");
    print_students(my_class, SIZE);

    puts("\n--- �ǥͦ��Z���� ---");
    print_report(my_class, SIZE);

    return 0;
}

void input_students(Student students[], int len) {
    for (int i = 0; i < len; i++) {
        printf("\n�ǥ� %d:\n", i + 1);
        printf("�m�W: ");
        scanf_s("%s", students[i].name,19);
        printf("�Ǹ�: ");
        scanf_s("%d", &students[i].id);
        printf("�ƾǦ��Z: ");
        scanf_s("%d", &students[i].math);
        printf("�q�����Z: ");
        scanf_s("%d", &students[i].comput);

        students[i].avg = (float)(students[i].math) + (float)(students[i].comput);
        students[i].avg /= 2.0;
    }
}

void print_students(const Student students[], int len) {
    printf("%-10s %-10s %-6s %-6s %-6s\n", "�m�W", "�Ǹ�", "�ƾ�", "�q��", "����");
    for (int i = 0; i < len; i++) {
        printf("%-10s %-10d %-6d %-6d %-6.2f\n",
            students[i].name,
            students[i].id,
            students[i].math,
            students[i].comput,
            students[i].avg);
    }
}

void sort_students_by_avg(Student students[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (students[j].avg < students[j + 1].avg) {
                swap_students(&students[j], &students[j + 1]);
            }
        }
    }
}

void swap_students(Student* s1, Student* s2) {
    Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void print_report(const Student students[], int len) {
    printf("%-10s %-10s %-6s %-6s %-6s\n", "�m�W", "�Ǹ�", "�ƾ�", "�q��", "����");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < len; i++) {
        printf("%-10s %-10d %-6d %-6d %-6.2f\n",
            students[i].name,
            students[i].id,
            students[i].math,
            students[i].comput,
            students[i].avg);
    }
    printf("=================================================\n");
}
