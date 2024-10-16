#include <stdio.h>
#include <stdlib.h>

int main() {
	float a,b,pi;
	int i;
	scanf("%f",&a);
	i=1;
	b=1;
	pi=4;
	while(i<=a){
		if (i%2==0){
			pi+=4/(1+b*2);
		}else{
			pi-=4/(1+b*2);
		}
		i++;
		b++;
	}
	printf("%f",pi);
	return 0;
}
