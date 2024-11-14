
#include <stdio.h>

int main(void)
{
    int n[5] = {0}; 

       
    for (size_t i = 0; i < 5; ++i) {
        scanf_s("%d", &n[i]);
    }

    printf("%s%13s\n", "Element", "Value");

   
    for (size_t i = 0; i < 5; ++i) {
        printf("%7u%13d\n", i, n[i]);
    }
}