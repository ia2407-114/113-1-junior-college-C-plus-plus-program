//�D��4. �ק�W�z�{���X�A�ή榡�ƨ�ƨӼg�J�ǥͩm�W�P���Z�A�åBŪ���X�ӦL��ù����C
#include <stdio.h>

int main()
{
    FILE* fp;       // �ŧi�ɮ׫���
    char fname[20] = "students.txt";  // �]�w�ɮצW��
    char name[50];  // �ǥͩm�W
    int score;      // �ǥͦ��Z
    int num_students;  // �ǥͤH��

    // ��J�ǥͤH��
    printf("�п�J�ǥͤH��: ");
    scanf_s("%d", &num_students);

    // �}�Ҽg�J�ɮ�
    fp = fopen(fname, "w");
    if (fp == NULL) {
        printf("�L�k�}���ɮ׶i��g�J!\n");
        return 1; // �L�k�}���ɮסA�����{��
    }

    printf("�}�l�g�J�ɮ� %s..\n", fname);

    // ��J�C�Ӿǥͪ��m�W�M���Z�üg�J�ɮ�
    for (int i = 1; i <= num_students; i++) {
        printf("�п�J�� %d ��ǥͪ��m�W: ", i);
        scanf_s("%s", name);  // ��J�ǥͩm�W
        printf("�п�J %s �����Z: ", name);
        scanf_s("%d", &score);  // ��J�ǥͦ��Z

        // �榡�ƿ�X�ǥͩm�W�M���Z���ɮ�
        fprintf(fp, "%d => %s\n", score, name);
    }

    printf("�g�J�ɮ׵���!\n");

    // �����ɮ�
    fclose(fp);

    // �}��Ū���ɮ�
    fp = fopen(fname, "r");
    if (fp != NULL) {
        printf("�ɮפ��e: \n");

        // Ū���ɮפ��e�����
        while (fscanf(fp, "%d => %s", &score, name) != EOF) {
            printf("�m�W: %s, ���Z: %d\n", name, score);
        }

        // �����ɮ�
        fclose(fp);
    }
    else {
        printf("���~: �ɮ׶}�ҿ��~..\n");
    }

    return 0;
}
