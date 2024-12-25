
#include <stdio.h>
#include <string.h>
#define SIZE 5
typedef struct student
{
    char name[20] = "";
    int id, math, comput;
    float avg;

}stu;
int sort_score(stu my_class[SIZE], int len);     //�ŧi�洫���
void printf_result(stu my_class[SIZE], int len);  // �ŧi��X�̫ᵲ�G���

int main(void)
{
    stu my_class[SIZE]; //�ŧistu���c���A�ܼ�
    
    int  mid;

    puts("Data items in original order");

    //��J�Ǹ����Z
    for (int  i = 0; i < SIZE; ++i) 
    {       
        printf("input name  ");
        scanf_s("%s", my_class[i].name, 19);
        printf("input ID  ");
        scanf_s("%d", &my_class[i].id);
        printf("input math  ");
        scanf_s("%d", &my_class[i].math);
        printf("input comput  ");
        scanf_s("%d", &my_class[i].comput);
        my_class[i].avg = (float)(my_class[i].math + my_class[i].comput) / 2;
    }


    //��l�Ƨ�
    printf("\n%s%8s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�ƾ�", "�p��", "����");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s", my_class[i].name);
        printf("%8d", my_class[i].id);
        printf("%8d", my_class[i].math);
        printf("%8d", my_class[i].comput);
        printf("%15f\n", my_class[i].avg);
    
    }


    //�I�s�洫��ƥH�����i��Ѥp��j�Ƨ�
    mid = sort_score(my_class, SIZE);

    puts("\nData items in ascending order\n");

    
    printf_result(my_class, SIZE);

    printf("\n�����: %d", mid);
    puts("");

}

//�洫���
int sort_score(stu my_class[SIZE], int len)
{
    stu temp;
    int pass, i = 0;
                      
    for (pass = 1; pass < len; ++pass) {

          
        for (i = 0; i < len - 1; ++i) {

                
            if (my_class[i].avg > my_class[i+1].avg)
            {
                temp = my_class[i];
                my_class[i] = my_class[i + 1];
                my_class[i + 1] = temp;
            }
        }
    }

    
    return my_class[len / 2].avg;
}

//��X�洫��ƧǨ��
void printf_result(stu my_class[SIZE], int len)
{
    printf("\n%s%8s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�ƾ�", "�p��", "����");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s", my_class[i].name);
        printf("%8d", my_class[i].id);
        printf("%8d", my_class[i].math);
        printf("%8d", my_class[i].comput);
        printf("%15f\n", my_class[i].avg);

    }
}