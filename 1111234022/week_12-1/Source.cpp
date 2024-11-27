#include<stdio.h>

float avg_score(int arr[4][5],char names[5][10], int len);

int main()
{
	char names[5][10];
	int n[4][5] = { 0 };
	float avg = 0.0;
	for (int i = 0; i < 5; i++)
	{
		printf("\n輸入學生%d學號:",i+1);
		scanf_s("%d", &n[0][i]);
		printf("\n輸入學生%d姓名:", i + 1);
		scanf_s("%s", names[i],10);
		printf("\n輸入學生%d的計概成績:", i+1);
		scanf_s("%d", &n[1][i]);   
		printf("\n輸入學生%d的數學成績:", i+1);
		scanf_s("%d", &n[2][i]);
	}
	
	avg = avg_score(n, names,5);
	
	printf("\n");	
	printf("\n全班平均為:%f\n",avg);


}
float avg_score(int arr[4][5], char names[5][10], int len)
{
	float average = 0;
	int i;
	for (i = 0; i < len; i++)
	{
		
		arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
		average += arr[3][i];


	
	}
	printf("\n%s%8s%8s%8s%8s\n", "姓名", "學號", "計概", "數學", "平均");
	for (int i = 0; i < 5; i++)
	{
		printf("%s%8d%8d%8d%8d\n", names[i], arr[0][i], arr[1][i], arr[2][i], arr[3][i]);

	}
	
	return average / len;

}