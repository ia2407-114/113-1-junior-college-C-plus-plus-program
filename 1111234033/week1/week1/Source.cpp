#include <stdio.h>

// �w�q���c�� my_cs
struct my_cs {
    char name[20];
    int id;
    int math;
    int computer;
    float avg;
};

int main(void)
{
    FILE* cfPtr = NULL; // �ɮ׫���

    // �ϥ� fopen_s �}���ɮ�
    if (fopen_s(&cfPtr, "score.dat", "wb") != 0) {
        puts("File could not be opened.");
        return 1; // �L�k�}���ɮסA�����{��
    }

    // �إߪŪ� my_cs ���c��
    struct my_cs blankClient = { "", 0, 0, 0, 0.0f };

    // �g�J 100 ���Ū��������ɮ�
    for (unsigned int i = 0; i < 100; ++i) {
        size_t result = fwrite(&blankClient, sizeof(struct my_cs), 1, cfPtr);
        if (result != 1) {
            puts("Write error occurred.");
            fclose(cfPtr);
            return 1; // �g�J���ѡA�����{��
        }
    }

    fclose(cfPtr); // �����ɮ�
    puts("File created successfully.");
    return 0; // �{�����\����
}