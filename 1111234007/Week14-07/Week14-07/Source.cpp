#include <stdio.h>
#include <string.h>

int linear(int search_key, int student[5][3], int len);
void sort_id(int student[5][3], char names[5][10], int len);
int binary(int search_key2, int student[5][3], int len);


// a 1 10 20 b 2 20 30 c 3 30 40 d 4 40 50 e 5 50 60
void main(void)
{
	// student[�ǥͤH��][�Ǹ�, �p��, �ƾ�]
	int student[5][3] = { 0 };
	char names[5][10] = { "" };
	int i, j, search_key;

	for (i = 0; i < 5; i++)
	{
		printf("�п�J��%d��P�Ǫ��m�W�G", i + 1);
		scanf_s("%s", names[i], 10);

		printf("�п�J��%d��P�Ǫ��Ǹ��G", i + 1);
		scanf_s("%d", &student[i][0]);

		printf("�п�J��%d��P�Ǫ��p�����Z�G", i + 1);
		scanf_s("%d", &student[i][1]);

		printf("�п�J��%d��P�Ǫ��ƾǦ��Z�G", i + 1);
		scanf_s("%d", &student[i][2]);
	}

	printf("\n%s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�");

	for (i = 0; i < 5; i++)
	{
		printf("%s%10d%10d%10d\n", names[i], student[i][0], student[i][1], student[i][2]);
	}



	int result, search_key2;

	printf("�п�J�n�j�M���ǥ;Ǹ��G");
	scanf_s("%d", &search_key);

	result = linear(search_key, student, 5);
	if (result != -1) {
		printf("�b�}�C����%d��\n", result);
		printf("\n%s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�");
		printf("%s%10d%10d%10d\n", names[result], student[result][0], student[result][1], student[result][2]);
	}
	else {
		printf("�䤣�즹�����!");
	}

	// binary
	sort_id(student, names, 5);
	printf("\n%s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�");

	for (i = 0; i < 5; i++)
	{
		printf("%s%10d%10d%10d\n", names[i], student[i][0], student[i][1], student[i][2]);
	}



	printf("�п�J�n�j�M���ǥ;Ǹ��G");
	scanf_s("%d", &search_key2);

	result = binary(search_key2, student, 5);
	if (result != -1) {
		printf("\n�b�}�C����%d��\n", result);
		printf("\n%s%8s%8s%8s\n", "�m�W", "�Ǹ�", "�p��", "�ƾ�");
		printf("%s%10d%10d%10d\n", names[result], student[result][0], student[result][1], student[result][2]);
	}
	else {
		printf("�䤣�즹�����!");
	}

}

int linear(int search_key, int student[5][3], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (student[i][0] == search_key) {
			return i;
		}
	}
	return -1;
}

void sort_id(int student[5][3], char names[5][10], int len)
{
	int i, j, temp;
	char tem[10];

	// �j����
	for (i = 0; i < len - 1; i++)
	{
		// ��X�̤j���ƭ�
		for (j = 0; j < len - i - 1; j++)
		{
			if (student[j][0] > student[j + 1][0]) {
				// �Ǹ�
				temp = student[j][0];
				student[j][0] = student[j + 1][0];
				student[j + 1][0] = temp;

				// �p��
				temp = student[j][1];
				student[j][1] = student[j + 1][1];
				student[j + 1][1] = temp;

				// �ƾ�
				temp = student[j][2];
				student[j][2] = student[j + 1][2];
				student[j + 1][2] = temp;

				// �m�W
				strcpy_s(tem, names[j]);
				strcpy_s(names[j], names[j + 1]);
				strcpy_s(names[j + 1], tem);

			}
		}

	}
}


int binary(int search_key2, int student[5][3], int len)
{
	int low, high, mid, i;
	low = 0;
	high = len;
	mid = (high + low) / 2;

	while (high >= low) {
		if (search_key2 > student[mid][0]) {
			low = mid + 1;
		}
		else if (search_key2 < student[mid][0]) {
			high = mid - 1;
		}
		else {
			return mid;
		}
		mid = (high + low) / 2;
	}
	return -1;
}