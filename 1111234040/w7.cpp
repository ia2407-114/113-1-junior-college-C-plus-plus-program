#include <stdio.h>
#include <stdlib.h> 

int main() {
	int n,i;
	float e;
	float j;
	e=1;
	j=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		j=i*j;
		e+=1/j;
	}
	printf("%f",e);
	return 0 ;
}

