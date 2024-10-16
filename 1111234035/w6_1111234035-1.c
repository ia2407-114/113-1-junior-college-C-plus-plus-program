#include <stdio.h>
#include <stdlib.h>

int main() {
	int i , a , num;
	i = 1;
	scanf("%d",&a);
	while(i<=a){
		printf("%d     ",i);
		num = i*i;
		printf("%d\n",num);
		i++;
	}
	return 0;
}
