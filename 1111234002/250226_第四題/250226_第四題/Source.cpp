/*�D��4. �ק�W�z�{���X�A�ή榡�ƨ�ƨӼg�J�ǥͩm�W�P���Z�A�åBŪ���X�ӦL��ù����C*/
#include <stdio.h>

int main()
{
    FILE* fp;
    char fname[20] = "phones.txt";
    char str0[50] = "lin yuqi";   // �ǥͩm�W
    char str1[50] = "78";         // �ƾǦ��Z
    char str2[50] = "86";         // �p������Z

    // �}���ɮ׶i��g�J
    if (fopen_s(&fp, fname, "w") != 0) {
        printf("���~: �L�k�}���ɮ׶i��g�J�C\n");
        return 1;
    }

    printf("�}�l�g�J�ɮ� %s..\n", fname);

    // �ϥ� fprintf �榡�ƿ�X��ƨ��ɮ�
    fprintf(fp, "�m�W => %s\n", str0);
    fprintf(fp, "�ƾ� => %s\n", str1);
    fprintf(fp, "�q�� => %s\n", str2);

    printf("�g�J�ɮ׵���!\n");

    // �����g�J�ɮ�
    fclose(fp);

    // �}���ɮ׶i��Ū��
    if (fopen_s(&fp, fname, "r") != 0) {
        printf("���~: �L�k�}���ɮ׶i��Ū���C\n");
        return 1;
    }

    // Ū���ɮר���ܤ��e
    printf("�ɮפ��e: \n");

    // Ū���C�@��
    char buffer[50]; // �ΨӦs�x�C�檺���
    while (fscanf_s(fp, "%49[^\n]\n", buffer, sizeof(buffer)) != EOF) {
        printf("%s\n", buffer); // ��X�C�@��
    }

    // �����ɮ�
    fclose(fp);

    return 0;
}
