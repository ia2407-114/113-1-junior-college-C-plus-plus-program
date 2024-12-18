#include <stdio.h>
#include <string.h>

void avg_score(int student[5][4], int len);
void sort_score(int student[5][4], char* namesPtr[5], int len, int (*compare)(int score1, int score2));
int ascending(int score1, int score2);
int desending(int score1, int score2);
void swapPtr(char* Ptr1, char* Ptr2);


void main(void)
{
    int student[5][4] = { 0 };
    char* namesPtr[5];
    char names[5][10] = { "" };
    int i, j, search_key;

    for (i = 0; i < 5; i++)
    {
        printf("�п�J��%d��P�Ǫ��m�W�G", i + 1);
        scanf_s("%s", names[i], 10);
        namesPtr[i] = names[i];

        printf("�п�J��%d��P�Ǫ��Ǹ��G", i + 1);
        scanf_s("%d", &student[i][0]);

        printf("�п�J��%d��P�Ǫ��p�����Z�G", i + 1);
        scanf_s("%d", &student[i][1]);

        printf("�п�J��%d��P�Ǫ��ƾǦ��Z�G", i + 1);
        scanf_s("%d", &student[i][2]);
    }

    avg_score(student, 5);

    sort_score(student, namesPtr, 5, desending);

    printf("\n%s%8s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�", "����");

    for (i = 0; i < 5; i++)
    {
        printf("%s%10d%10d%10d%10d\n", namesPtr[i], student[i][0], student[i][1], student[i][2], student[i][3]);
    }



    //int result, search_key2;

    //printf("�п�J�n�j�M���ǥ;Ǹ��G");
    //scanf_s("%d", &search_key);

    //result = linear(search_key, student, 5);
    //if (result != -1) {
    // printf("�b�}�C����%d��\n", result);
    // printf("\n%s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�");
    // printf("%s%10d%10d%10d\n", names[result], student[result][0], student[result][1], student[result][2]);
    //}
    //else {
    // printf("�䤣�즹�����!");
    //}
}

/*
int linear(int search_key, int student[5][4], int len)
{
 int i;
 for (i = 0; i < len; i++)
 {
  if (student[i][0] == search_key) {
   return i;
  }
 }
 return -1;
}
*/

void sort_score(int student[5][4], char* namesPtr[5], int len, int (*compare)(int score1, int score2))
{
    int i, j, temp;


    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            //if (student[j][3] > student[j + 1][3]) {
            if ((*compare)(student[j][3], student[j + 1][3])) {
                // �i��j��N�N��O�n�洫
                temp = student[j][0];
                student[j][0] = student[j + 1][0];
                student[j + 1][0] = temp;

                temp = student[j][1];
                student[j][1] = student[j + 1][1];
                student[j + 1][1] = temp;

                temp = student[j][2];
                student[j][2] = student[j + 1][2];
                student[j + 1][2] = temp;

                temp = student[j][3];
                student[j][3] = student[j + 1][3];
                student[j + 1][3] = temp;

                swapPtr(namesPtr[j], namesPtr[j + 1]);
            }
        }

    }
}



void avg_score(int student[5][4], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        student[i][3] = (student[i][1] + student[i][2]) / 2;
        // score[i] = student[i][3];
    }
}

void swapPtr(char* Ptr1, char* Ptr2)
{
    char* tempPtr;
    tempPtr = Ptr1;
    Ptr1 = Ptr2;
    Ptr2 = tempPtr;
}


int ascending(int score1, int score2)
{
    return score1 > score2;
}


int desending(int score1, int score2)
{
    return score1 < score2;
}