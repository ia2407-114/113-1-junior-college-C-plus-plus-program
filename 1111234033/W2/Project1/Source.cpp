#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
    int id;
    char name[20];
    int math;
    int com;
    float avg;
    struct stu* next;
}stu;

void create(stu*& head, stu in);
void out(stu* head);
void free(stu*& head, int target);

int main()
{
    stu* head = NULL;
    stu in = { 0,"",0,0,0.0,NULL };
    int target;

    printf("input id: ");
    scanf_s("%d", &in.id);
    while (in.id != 0)
    {
        printf("input name¡Bmath¡Bcomputer :");
        scanf_s("%s%d%d", in.name, 19, &in.math, &in.com);
        in.avg = (float)(in.math + in.com) / 2;
        create(head, in);
        printf("input id: ");
        scanf_s("%d", &in.id);
    }
    out(head);

    printf("\ninput id that you want to delete: ");
    scanf_s("%d", &target);
    free(head, target);


    out(head);

    return  0;

}
void create(stu*& head, stu in)
{
    stu* newnode = (stu*)malloc(sizeof(stu));
    *newnode = in;

    if (head == NULL || newnode->id < head->id)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    stu* temp = head;
    while (temp->next != NULL && temp->next->id < newnode->id)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void out(stu* head)
{
    printf("\nid     name      math        computer        avg\n");
    stu* temp = head;
    while (temp != NULL)
    {
        printf("\n%-10d%-10s%-10d%-10d%-34f\n", temp->id, temp->name, temp->math, temp->com, temp->avg);
        temp = temp->next;
    }
}

void free(stu*& head, int target)
{
    stu* temp = head, * del = head;
    if (del->id == target)
    {
        head = head->next;
        free(del);
        return;
    }
    for (int i = 0; i <= target; i++)
    {
        if (del->id == target)
        {
            while (temp->next->id < del->id)
            {
                temp = temp->next;
            }
            temp->next = del->next;
            free(del);
            return;
        }
        del = del->next;
    }
    printf("\nnot found!!!\n");
}