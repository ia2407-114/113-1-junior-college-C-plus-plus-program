#include <stdio.h>

int num(int x, float y);

int main()
{
	int x;
	float y;
	int A[11] = {0};
	printf("��J����:");
	scanf_s("%d", &x);
	printf("��J�~�Q�v:");
	scanf_s("%f", &y);
	for (int i = 1; i <= 10; i++)
	{
		if (i != 1)
			x = A[i - 1];

		A[i] = num(x, y);
		printf("��%d�~���Q�M:%d\n",i, A[i]);
	}

}

int num(int x, float y)
{
	x = x * (1.0 + y);
	return x;
}