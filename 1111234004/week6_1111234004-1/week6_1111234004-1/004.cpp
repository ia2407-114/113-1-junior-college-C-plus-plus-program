#include<stdio.h>
int main()
{
	int n, i = 1; /*��J��ܼƶq*/
	printf("�п�J�n��ܪ����G n:\n");
	scanf_s("%d", &n);

	while (i <= n) {
		printf("%d\t%d\n", i, i * i);
		i++;
	}
	return 0;
}
