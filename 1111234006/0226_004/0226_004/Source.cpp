/*�D��4.�ק�W�z�{���X�A�ή榡�ƨ�ƨӼg�J�ǥͩm�W�P���Z�A�åBŪ���X�ӦL��ù����C*/

#include <stdio.h>
int main()
{
    FILE* fp; // �ŧi�ɮ׫���
    char fname[20] = "phones.txt"; // �ɮצW��
    char name[50];        // �ǥͩm�W
    char grade[50];       // �ǥͦ��Z
    char model[50];       // ��L��ơ]�i�H�O����������^

    // �}���ɮ׼g�J�Ҧ� ("w" �N��g�J�Ҧ�)
    if (fopen_s(&fp, fname, "w") != 0) {
        printf("�L�k�}���ɮ׶i��g�J�C\n");
        return 1;
    }

    printf("�}�l�g�J�ɮ� %s..\n", fname);

    // ���ϥΪ̿�J���
    for (int i = 1; i <= 3; i++) {  // ���]�ڭ̿�J3�Ӿǥ͸��
        printf("�п�J�� %d ��ǥͪ��m�W: ", i);
        scanf_s("%49s", name, (unsigned)sizeof(name)); // Ū���m�W

        printf("�п�J�� %d ��ǥͪ����Z: ", i);
        scanf_s("%49s", grade, (unsigned)sizeof(grade)); // Ū�����Z

        printf("�п�J�� %d ��ǥͪ���������Ψ�L���: ", i);
        scanf_s("%49s", model, (unsigned)sizeof(model)); // Ū����L���

        // �榡�ƿ�X��ƨ��ɮ�
        fprintf(fp, "�ǥ� %d: �m�W => %s, ���Z => %s, ������� => %s\n", i, name, grade, model);
    }

    printf("�g�J�ɮ׵���!\n");
    fclose(fp); // �����ɮ�

    // �}���ɮ�Ū���Ҧ� ("r" �N��Ū���Ҧ�)
    if (fopen_s(&fp, fname, "r") != 0) {
        printf("���~: �ɮ׶}�ҿ��~..\n");
        return 1;
    }

    // Ū���ɮפ��e�����
    printf("�ɮפ��e: \n");
    while (fscanf_s(fp, "%49s", name, (unsigned)sizeof(name)) != EOF) {  // �ϥ� sizeof �ӫ��w�̤j����
        printf("%s\n", name);  // ���Ū���쪺�C�@����
    }

    fclose(fp); // �����ɮ�

    return 0;
}
