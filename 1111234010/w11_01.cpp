#include<stdio.h>
#include<string.h>
float sort_score(int arr[4][5], char names[5][10], int len);
int main(void)
{
	int n[4][5] = { 0 };
	char names[5][10];
	float avg = 0;
	for (size_t i = 0; i < 5; ++i) {
		printf("\n請輸入學生%d的學號:", i);
		scanf_s("%d", &n[0][i]);
		printf("\n請輸入學生%d的計概成績:", i);
		scanf_s("%d", &n[1][i]);
		printf("\n請輸入學生%d的數學成績:", i);
		scanf_s("%d", &n[2][i]);
		printf("\n請輸入學生%d的姓名:", i);
		scanf_s("%s", names[i],10);
	}
	printf("平均成績的中位數為:%f\n", sort_score(n,names, 5));
	printf("%s%10s%8s%8s%8s\n","姓名", "學號", "計概", "數學", "平均");
	for (size_t i = 0; i < 5; ++i) 
	{
		printf("%s%10d%8d%8d%8d\n",names[i],  n[0][i], n[1][i], n[2][i], n[3][i]);
	}


}
float sort_score(int arr[4][5], char names[5][10], int len)
{
	float average = 0;
	int i,j,temp;
	char tem[10];
	for (i = 0; i < len; i++)
	{
		average += arr[3][i];
		arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
	}
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
			if (arr[3][j] < arr[3][j + 1])
			{
				temp = arr[0][j];
				arr[0][j] = arr[0][j + 1];
				arr[0][j + 1] = temp;
				temp = arr[1][j];
				arr[1][j] = arr[1][j + 1];
				arr[1][j + 1] = temp;
				temp = arr[2][j];
				arr[2][j] = arr[2][j + 1];
				arr[2][j + 1] = temp;
				temp = arr[3][j];
				arr[3][j] = arr[3][j + 1];
				arr[3][j + 1] = temp;
				strcpy_s(tem, names[j]);
				strcpy_s(names[j], names[j + 1]);
				strcpy_s(names[j + 1], tem);

			}
	return arr[3][len / 2];
}
