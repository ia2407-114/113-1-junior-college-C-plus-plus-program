#include <stdio.h>
#include <stdlib.h>

int main() {
	int i , num;
	i = 1;
	while(i<=15){
		printf("%d     ",i);
		num = i*i;
		printf("%d\n",num);
		i++;
	}
	return 0;
}
