 #include <stdio.h>

int power(int n, int k);

int main(void)
{
	int n, k, res;

	printf("請輸入底數(n)==> \n");
	scanf_s("%d", &n);

	printf("請輸入指數(k)==> \n");
	scanf_s("%d", &k);

	res = power(n, k);

	printf("%d^%d的結果為: %d", n, k, res);

	return 0;
}

int power(int n, int k)
{
	if (k <= 0) {
		return 1;
	}
	else {
		return (n * power(n, k - 1));
	}

}