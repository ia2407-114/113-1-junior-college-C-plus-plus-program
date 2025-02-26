/*�D��2�A�ھھǸ� ID�A�z�L��L�N��Ƽg�J�ɮפ�*/

#include <stdio.h>
typedef struct student {
    int id;           // �ǥ� ID
    char name[20];    // �ǥͩm�W
    int math;         // �ƾǦ��Z
    int comput;       // �p������Z
    float avg;        // ��������
} stu;

int main(void) {
    FILE* cfPtr;              // �w�q�ɮ׫���
    stu stuData = { 0, "", 0, 0, 0.0f }; // ��l�ƾǥ͸��

    // ���եH "rb+" �Ҧ��}���ɮ� (Ū�g�Ҧ��A���|�Ыطs�ɮ�)
    // �Y�ɮפ��s�b�A�h�אּ "wb+" �Ҧ��ӳЫ��ɮ�
    if (fopen_s(&cfPtr, "stu002.dat", "rb+") != 0) {
        fopen_s(&cfPtr, "stu002.dat", "wb+"); // �Y�ɮפ��s�b�A�h�إ߷s�ɮ�
    }

    // �ˬd�ɮ׬O�_���\�}��
    if (cfPtr == NULL) {
        puts("�ɮ׵L�k�}��"); // ��ܿ��~�T��
        return 1; // �����{��
    }

    // ���ܨϥΪ̿�J�ǥ� ID�A�Y��J 0 �h�h�X
    printf("�п�J�ǥ� ID (��J 0 �h�X): ");
    scanf_s("%d", &stuData.id);

    // ��ϥΪ̿�J�� ID ���� 0 �ɡA�����J�ǥ͸��
    while (stuData.id != 0) {
        // �ˬd ID �O�_�p�� 1�A�Y�L�īh���ܭ��s��J
        if (stuData.id < 1) {
            puts("�L�Ī��ǥ� ID�A�Э��s��J");
            printf("�п�J�ǥ� ID (��J 0 �h�X): ");
            scanf_s("%d", &stuData.id);
            continue; // ���L��e�j��A���s��J
        }

        // ��J�ǥͩm�W�B�ƾǦ��Z�B�p������Z
        printf("�п�J�m�W�B�ƾǦ��Z�B�p������Z: ");
        scanf_s("%19s", stuData.name, sizeof(stuData.name));// ����r����סA�קK����
        scanf_s("%d", &stuData.math); // ��J�ƾǦ��Z
        scanf_s("%d", &stuData.comput); // ��J�p������Z

        // �۰ʭp�⥭������
        stuData.avg = (stuData.math + stuData.comput) / 2.0f;

        // �w����ɮ׹�����m�A�ھھǥ� ID �s�J (ID �q 1 �}�l�A�]���ݭn�� 1)
        fseek(cfPtr, (stuData.id - 1) * sizeof(stu), SEEK_SET);
        fwrite(&stuData, sizeof(stu), 1, cfPtr); // �N�ǥ͸�Ƽg�J�ɮ�

        // ���ܨϥΪ̿�J�U�@�Ӿǥ� ID
        printf("�п�J�ǥ� ID (��J 0 �h�X): ");
        scanf_s("%d", &stuData.id);
    }

    // �����ɮ�
    fclose(cfPtr);
    return 0;
}
