#include <stdio.h>
#include <stdlib.h>
void fact(int); 
int x,i,a;
a=1;
int main() {
	scanf("%d",&x);
	fact(x);
	return 0;
}


void fact(int x){
	if(x == 0){
	printf("1");
	}else{
		for(i=1;i<=x;i++){
			a *= i;
		}
		printf("%d",a);
	} 
	return 0;
}
