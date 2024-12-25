#include <stdio.h>

float fact(int x);
float pow(int x, int i);

int main()
{
    int x;
    float iPow, iFact;
    double add, ex = 1.0;

    printf("輸入x值: ");
    scanf_s("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        iPow = pow(x, i);
        iFact = fact(i);
        add = iPow / iFact;
        printf("Pow(%d,%d) / Fact(%d) = %f / %f = %lf \n", x, i ,i , iPow, iFact, add);
        ex += add;
    }
    printf("e^%d 的近似值是為%lf\n", x, ex);
}
float fact(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}
float pow(int x, int i)
{
    int z;
    for (z = 1; i > 0; i--)
    {
        z *= x;
    }
    return z;
}