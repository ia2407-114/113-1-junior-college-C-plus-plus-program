 #include <stdio.h>

int power(int n, int k);

int main(void)
{
	int n, k, res;

	printf("�п�J����(n)==> \n");
	scanf_s("%d", &n);

	printf("�п�J����(k)==> \n");
	scanf_s("%d", &k);

	res = power(n, k);

	printf("%d^%d�����G��: %d", n, k, res);

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