// Fig. 6.3: fig06_03.c
// Initializing the elements of an array to zeros.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int n[5] = {0}; // n is an array of five integers


    for (size_t i = 0; i < 5; ++i) {
        scanf_s("%d", &n[i]);
    }

    printf("%s%13s\n", "Element", "Value");

    // output contents of array n in tabular format
    for (size_t i = 0; i < 5; ++i) {
        printf("%7u%13d\n", i, n[i]);
    }
}