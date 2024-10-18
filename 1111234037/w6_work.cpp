#include <stdio.h>
int main()
{

	int i = 0;
	int sum = 0;
	
	while (i <= 10)
	{
		i = i + 1;
		sum =i* i;
		printf("%d %d\n", i, sum);
	}
	
	return 0;
}