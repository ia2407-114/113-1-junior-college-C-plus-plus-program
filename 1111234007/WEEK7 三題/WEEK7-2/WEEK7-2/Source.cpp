//�D��1:�п�J�@��X�ȡA�إߤ@�ӰƵ{��fact(X)�Hfor�j���X�����ȡA�ݶǤJ�Ѽ�X�A�öǦ^X!�����G�C�ѥD�{���L�XX������X!
//����: X = 5���� = 1 * 2 * 3 * 4 * 5 = 120�A0���� = 1(�w�q)

#include <stdio.h>


int fact(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result; 
}

int main() {
    int x;
    printf("�п�J�@�Ӿ��X�G");
    scanf_s("%d", &x);

    
    printf("%d������ = %d\n", x, fact(x));

    return 0;
}