#include<stdio.h>
int fact(int y);
int fact(int y)
{
	int j = 1, i;
	for (int i = 1; i <= y; i++) {
		j *= i;
	}
	return  j;
}
	int main()
{
		int x = 0;
	printf("��Jx��:");
	scanf_s("%d", &x);
	fact(x);
	printf("%d��������: %d\n", x, fact(x));

	return 0;
}
