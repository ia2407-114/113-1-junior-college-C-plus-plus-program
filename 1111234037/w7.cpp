#include <stdio.h>
int count(int x);
int main() 
{
    int x;
    printf("¿é¤J­È: ");
    scanf_s("%d", &x);
    printf("%d!=%d\n", x, count(x));
    return 0;
}

int count(int x) 
{
    int j = 1;
    int i = 1;
    for (i = 1; i <= x; i++) 
    {
        j = j* i;
    }
    return j;
}