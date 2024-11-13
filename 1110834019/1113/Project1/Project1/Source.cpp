
#include <stdio.h>

int main(void)
{
    int n[5]; 

    
    printf("請輸入5個整數:\n");

    
    for (size_t i = 0; i < 5; ++i) {
        printf("輸入第 %zu 個數字: ", i + 1);
        scanf_s("%d", &n[i]); 
    }

   
    printf("\n%s%13s\n", "Element", "Value");

    
    for (size_t i = 0; i < 5; ++i) {
        printf("%7zu%13d\n", i, n[i]);
    }

    return 0;
}