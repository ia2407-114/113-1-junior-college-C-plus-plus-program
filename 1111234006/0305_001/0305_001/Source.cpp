/*�D��1. �N�ǥ͵��c��J�d�ҵ{���X�����N��������c�A�[�W�ۧڰѦҫ��СA�z�L��L��J4���ǥ͸�ơA�ھھǸ� ID���J�쵲��C���A�̫�N�쵲��C�����e�L�X�C*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �w�q�ǥ͵��c
struct student {
    int id; // �Ǹ�
    char name[50]; // �ǥͩm�W
    struct student* nextPtr; // �ۧڰѦҫ���
};

typedef struct student Student; // �w�q�ǥ͵��c����
typedef Student* StudentPtr; // �w�q�ǥͫ�������

// �禡�쫬
void insert(StudentPtr* sPtr, int id, char name[]);
void printList(StudentPtr currentPtr);
void instructions(void);

int main(void) {
    StudentPtr startPtr = NULL; // ��l�ɡA�S���ǥ͸��
    int id;
    char name[50];

    instructions(); // ��ܿ��

    // Ū�J4���ǥ͸��
    for (int i = 0; i < 4; i++) {
        printf("��J�� %d ��ǥ͸�ơG\n", i + 1);
        printf("�Ǹ��G");
        scanf_s("%d", &id);
        getchar();  // �ΨӮ�������Ÿ�
        printf("�m�W�G");
        fgets(name, sizeof(name), stdin); // Ū���m�W�A�]�t�Ů�
        name[strcspn(name, "\n")] = 0; // �h�������������

        insert(&startPtr, id, name); // ���J�ǥ͸�ƨ��쵲��C
    }

    printf("\n�ǥ͸���쵲��C�G\n");
    printList(startPtr); // ���L�쵲��C�����e

    return 0;
}

// ��ܿ��
void instructions(void) {
    puts("��J�A�����:\n"
        "   1 ���J�ǥ͸�ƨ��쵲��C���C\n"
        "   2 �d���쵲��C�����ǥ͸�ơC\n");
}

// �ھھǸ����J�ǥ͸�ơA�O���Ƨ�
void insert(StudentPtr* sPtr, int id, char name[]) {
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student)); // ���t���s

    if (newPtr != NULL) {
        newPtr->id = id; // �]�m�Ǹ�
        strcpy_s(newPtr->name, name); // �ƻs�m�W
        newPtr->nextPtr = NULL; // �s�`�I�� nextPtr �]�� NULL

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        // ���A�����J��m�A�ھھǸ��j�p�Ƨ�
        while (currentPtr != NULL && id > currentPtr->id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        // �p�G�b�쵲��C�}�Y���J
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { // ���J���쵲��C�������Υ���
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("�L�k���t���s�C\n");
    }
}

// ���L�쵲��C
void printList(StudentPtr currentPtr) {
    if (currentPtr == NULL) {
        puts("�쵲��C���šC\n");
    }
    else {
        while (currentPtr != NULL) {
            printf("�Ǹ�: %d, �m�W: %s\n", currentPtr->id, currentPtr->name);
            currentPtr = currentPtr->nextPtr;
        }
        puts(""); // ����
    }
}