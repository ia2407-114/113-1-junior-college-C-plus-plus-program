/*�D��1�A �N�ǥ͵��c��J�d�ҵ{���X���A�קאּ�إ�100���ťվǥ͸��*/
#include <stdio.h>

typedef struct student {   //�w�q���c
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;

int main(void)
{
    FILE* cfPtr=NULL;   // �w�q�ɮ׫��СA�Ω���V accounts.dat ���

    if ((fopen_s (&cfPtr,"accounts.dat", "wb"))!=0) {
        puts("�L�k�}�Ҥ��C"); // ��X���~�T��
    }
    else {
        // �إߤ@�ӹw�]�� student ���c�A�Ҧ�����l�Ƭ���
        student blankClient = { 0,"",0,0,0.0};

        // �V���g�J 100 ���ťլ���
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(struct student), 1, cfPtr);
        }

        fclose(cfPtr); // �������
    }
}
