#include <stdio.h>

int main()
{
	FILE* fp;  /* 宣告變數 */
	char Name[20] = "jason";
	int ID = 2250;
	int math = 100;
	int computer = 100;
	float AVG = 100;
	fopen_s(&fp, "student.dat", "w");   /* 開啟寫入檔案 */
	printf("開始寫入檔案%s..\n", &fp);
	/* 格式化輸出檔案內容 */
	fprintf(fp, "%d=> %s\n", 1, Name);
	fprintf(fp, "%d=> %s\n", 2, ID);
	fprintf(fp, "%d=> %s\n", 3, math);
	fprintf(fp, "%d=> %s\n", 2, computer);
	fprintf(fp, "%d=> %s\n", 3, AVG);

	printf("寫入檔案結束!\n");
	fclose(fp); /* 關閉檔案 */
	fopen_s(&fp, "student.dat", "r");   /* 開啟讀取檔案 */
	if (fp != NULL)         /* 讀取檔案 */
	{
		printf("檔案內容: \n");
		while (fscanf(fp, "%d", ID) != EOF)
		{
			printf("%s\n", fp);
		}
		fclose(fp); /* 關閉檔案 */
	}
	else
		printf("錯誤: 檔案開啟錯誤..\n");

	return 0;
}