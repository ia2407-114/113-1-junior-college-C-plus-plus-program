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
    printf("�п�JZ�ȡ]���ؼƶq�^�G");
    scanf_s("%d", &z);


    printf("�����e��%f\n", e(z));

    return 0;
}
