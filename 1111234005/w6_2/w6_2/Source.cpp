#include <stdio.h>

int main() {
    int n=0;
    int i = 1; 
    double pi = 0.0; 
    double j = 1.0; 

    printf("�п�J���ؼƶq n: ");

    if (scanf_s("%d", &n) != 1 , n < 1) {
        printf("��J�L�ġA�п�J�@�ӥ���ơC\n");
        return 1; 
    }

   
    while (i <= n) {
        pi += j * (4.0 / (2 * i - 1)); 
        j = -j;
        i++; 
    }

    
    printf("pi ������Ȭ�: %.15f\n", pi);

    return 0; 
}

