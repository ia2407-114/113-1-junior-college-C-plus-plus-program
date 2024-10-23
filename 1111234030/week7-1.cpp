#include <stdio.h>

int main() {
	double e = 1.0;
	double j = 1.0;
	int i , n, x;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		j *= i;
		e += 1 / j;
	}
	printf("%lf", e);
	return 0;
}
