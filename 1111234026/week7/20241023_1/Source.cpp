#include<stdio.h>
using namespace std;

int main()
{

	int nn = 0, i=0 ;
	double sum = 1.0, b = 1.0;

	printf("�п�J����ܼƶq\n");
	scanf_s("%d", &nn);

	for (i = 1; i <= nn; i++)
	{
		b *= i;
		sum += 1.0 / b;
	}
	printf("���G:%lf/n", sum);
	return sum;
}



