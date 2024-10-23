#include <stdio.h>
int fact(int x);
double exponen(int z);
int main() 
{
    int z;
    printf("輸入項目數量: ");
    scanf_s("%d", &z);
    printf("e的近似值為: %f\n", exponen(z));
    return 0;
}
int fact(int x)
{
    int j = 1;
    int i = 1;
    for (i = 1; i <= x; i++)
    {
        j = j * i;
    }
    return j;
}

double exponen(int z) 
{
    double k = 1.0;  
    for (int i = 1; i <= z; i++) {
        k += 1.0 / fact(i);
    }
    return k;
}