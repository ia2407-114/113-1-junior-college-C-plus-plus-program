//
//�D��1. �g�@�ӥD�{���A�z�L��L��J�����B�~�Q�v�A�A�إߤ@�ӰƵ{���ǤJ�o�T�ӰѼơA
// �p��C�~�����Q�M����Ǧ^��J�}�C���@�@10�~�A�åB�L�X�}�C�����Q�M���G

// Fig. 6.3: fig06_03.c
// Initializing the elements of an array to zeros.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int n [5] = {0},i ; // n is an array of five integers

    for ( i = 0; i < 5; ++i) {
        printf("��J�@�Ӽ�\n", (i+1));
        scanf_s("%d\n",&n[i]);
    }
    
    printf("%s%13s\n", "Element", "Value");

    // output contents of array n in tabular format
    for ( i = 0; i < 5; ++i) {
        printf("%7u%13d\n", i, n[i]);
    }
}