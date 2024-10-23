#include <stdio.h>
#include <stdlib.h>
void exponen(int);
int main() {
	int n;
	scanf("%d",&n);
	exponen(n);
	return 0;
}

void exponen(int n){
	int i,z;
	float e,j;
	e = 1;
	j=1;
	for (i=1;i<=n;i++){
		j=i*j;
		e += 1/j;
	}
	printf("%lf",e);
	return 0;
}
