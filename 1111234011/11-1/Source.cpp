#include<stdio.h>

float avg_score(int arr[4][5], int len);

int main()
{
	int n[4][5] = { 0 };
	float avg = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("\n��J�ǥ�%d�Ǹ�:", i + 1);
		scanf_s("%d", &n[0][i]);
		printf("\n��J�ǥ�%d���p�����Z:", i + 1);
		scanf_s("%d", &n[1][i]);
		printf("\n��J�ǥ�%d���ƾǦ��Z:", i + 1);
		scanf_s("%d", &n[2][i]);
	}
	printf("\n");
	avg = avg_score(n, 5);
	printf("%s%8s%8s%8s\n", "�Ǹ�", "�p��", "�ƾ�", "����");
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d%8d%8d%8d\n", n[0][i], n[1][i], n[2][i], n[3][i]);
	}
	printf("\n���Z������:%f", avg);
}
float avg_score(int arr[4][5], int len)
{
	float average = 0;
	int i;
	for (i = 0; i < len; i++)
	{
		arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
		average += arr[3][i];
	}
	return average / len;
}