
#include <stdio.h>

int main(void)
{
    int n[5]; 

    
    printf("�п�J5�Ӿ��:\n");

    
    for (size_t i = 0; i < 5; ++i) {
        printf("��J�� %zu �ӼƦr: ", i + 1);
        scanf_s("%d", &n[i]); 
    }

   
    printf("\n%s%13s\n", "Element", "Value");

    
    for (size_t i = 0; i < 5; ++i) {
        printf("%7zu%13d\n", i, n[i]);
    }

    return 0;
}