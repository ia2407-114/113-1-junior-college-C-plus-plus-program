// Fig. 11.10: fig11_10.c
/*�D��1�A �N�ǥ͵��c��J�d�ҵ{���X���A�קאּ�إ�100���ťվǥ͸��
�D��2.  �ھھǸ� ID�A�z�L��L�N��Ƽg�J�ɮפ�*/
// �Ыؤ@���H���s���ɮרö��Ǽg�J
#include <stdio.h>


typedef struct student {   //�w�q���c
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;

int main(void)
{
    FILE* cfPtr=NULL; // accounts.dat �ɮ׫���

    // fopen ���}�ɮסA�p�G�ɮ׵L�k�}�ҫh�h�X
    if ((fopen_s(& cfPtr, "accounts.dat", "wb")) !=0) {
        puts("�L�k�}���ɮסC");
    }
    else {
        // �Ыؤ@�ӥ]�t�w�]��ƪ� clientData
        struct student blankClient = { 0, "", 0,0, 0.0 };

        // ��X100���ťհO�����ɮ�
        for ( int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(struct student), 1, cfPtr);
        }

        fclose(cfPtr); // �����ɮ�
    }
}
                                                                         