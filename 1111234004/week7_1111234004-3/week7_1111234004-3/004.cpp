#include <stdio.h>


int fact(int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}


double e(int z)
{
    double sum = 1.0;
    for (int i = 1; i <= z; i++)
    {
        sum += 1.0 / fact(i);
    }
    return sum;
}

int main()
{
    int z;
    printf("請輸入Z值（項目數量）：");
    scanf_s("%d", &z);


    printf("近似的e值%f\n", e(z));

    return 0;
}
