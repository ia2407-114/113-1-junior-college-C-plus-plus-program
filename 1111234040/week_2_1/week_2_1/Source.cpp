#include <stdio.h>

int main()
{
    FILE* fp;  /* �ŧi�ɮ׫��� */
    char fname[20] = "students.txt";
    char name1[50] = "Alice";
    int math = 95;
    char name2[50] = "Bob";
    int computer = 88;
    float avg;
    avg = ((math + computer) / 2);
    fopen_s(&fp,fname, "w");   /* �}�Ҽg�J�ɮ� */
    if (fp == NULL) {
        printf("���~: �ɮ׶}�ҿ��~..\n");
        return 1;
    }

    printf("�}�l�g�J�ɮ�%s..\n", fname);
    
    /* �榡�ƿ�X�ǥͩm�W�P���Z */
    fprintf(fp, "�m�W: %s, ���Z: %d\n", name1, math);
    fprintf(fp, "�m�W: %s, ���Z: %d\n", name2, computer);
    fprintf(fp, " ���Z: % d\n", avg);

    printf("�g�J�ɮ׵���!\n");
    fclose(fp); /* �����ɮ� */

     fopen_s(&fp,fname, "r");   /* �}��Ū���ɮ� */
    if (fp != NULL) {         /* Ū���ɮ� */
        char buffer[100];
        printf("�ɮפ��e: \n");
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            printf("%s", buffer);
        }
        fclose(fp); /* �����ɮ� */
    }
    else {
        printf("���~: �ɮ׶}�ҿ��~..\n");
    }

    return 0;
}
