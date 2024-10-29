#include <stdio.h>
int fact(int);
void main(void)
{
	int num;
	printf("½Ð¿é¤J¼Æ¦r:\n");
	scanf_s("%d", &num);
	num = fact(num);
	printf("%d\n", num);


}

int fact(int x)
{
	int i = 1;
	int j = 1;
	for (i = 1; i <= x; i++)
	{
		j *= i;
	}
	return j;
}