#include <stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	printf("�п�J�n��ܪ��ƶqn:");
	if (scanf_s("%d", &n) != 1 , n< 1) {
		printf("��J�L��; �п�J�@�ӥ���� \n");
			return 1; 
	}
	while (i <=n )
	{
		printf("%d\t%d\n", i, i * i); 
		i++; 
	}
	return 0;
}