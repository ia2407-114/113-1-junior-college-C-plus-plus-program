#include <stdio.h>

int main()
{
	FILE* fp;  /* �ŧi�ܼ� */
	char Name[20] = "jason";
	int ID = 2250;
	int math = 100;
	int computer = 100;
	float AVG = 100;
	fopen_s(&fp, "student.dat", "w");   /* �}�Ҽg�J�ɮ� */
	printf("�}�l�g�J�ɮ�%s..\n", &fp);
	/* �榡�ƿ�X�ɮפ��e */
	fprintf(fp, "%d=> %s\n", 1, Name);
	fprintf(fp, "%d=> %s\n", 2, ID);
	fprintf(fp, "%d=> %s\n", 3, math);
	fprintf(fp, "%d=> %s\n", 2, computer);
	fprintf(fp, "%d=> %s\n", 3, AVG);

	printf("�g�J�ɮ׵���!\n");
	fclose(fp); /* �����ɮ� */
	fopen_s(&fp, "student.dat", "r");   /* �}��Ū���ɮ� */
	if (fp != NULL)         /* Ū���ɮ� */
	{
		printf("�ɮפ��e: \n");
		while (fscanf(fp, "%d", ID) != EOF)
		{
			printf("%s\n", fp);
		}
		fclose(fp); /* �����ɮ� */
	}
	else
		printf("���~: �ɮ׶}�ҿ��~..\n");

	return 0;
}