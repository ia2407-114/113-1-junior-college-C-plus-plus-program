//�D��2. �Ыإ�C�{���A��J���ؼƶq�A�çQ��while�j��p��X�H�U�ƦC:
//pi = 4 - (4 / 3) + (4 / 5) - (4 / 7) + (4 / 9) - (4 / 11) + ...
//�åB�L�Xpi�����G�C(���ؼƶq�U�h�A��T�׷U��)



#include <stdio.h>

int main() {
    int n=0;
    double pi = 0.0, j = 1.0;
    int i = 0;

    // ��J���ؼƶq
    printf("�п�J���ؼƶq n: ");
    scanf_s("%d", &n);

    // �ϥ� while �j��p�� pi ����
    while (i <= n) 
    {
        if (i % 2 )
        {
            pi += (4.0 / j);  // ���ƶ�����
        }
        else 
        {
            pi -= (4.0 / j);  // �_�ƶ����t
        }
        // �p��C�@��
        j += 2;
        i++;
    }

    // ��X pi �����G
    printf("%1f", pi*-1);

    return 0;
}
