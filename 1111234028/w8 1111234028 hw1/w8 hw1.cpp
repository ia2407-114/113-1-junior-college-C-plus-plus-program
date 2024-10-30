#include <stdio.h>
#include <stdlib.h>
 
int die(void);

int main()
{
	int f2 = 0;
	int f3 = 0;
	int f4 = 0;
	int f5 = 0;
	int f6 = 0;
	int f7 = 0;
	int f8 = 0;
	int f9 = 0;
	int f10 = 0;
	int f11 = 0;
	int f12 = 0;


	int ex;
	int face;
	printf("½Ð¿é¤J60000000\n");
	scanf_s("%d\n", &ex);

	int i = 1;
	for (i = 1; i <= ex; i++)
	{


		face = die();
		switch (face)
		{
		case 2:
			++f2;
			break;
		case 3:
			++f3;
			break;
		case 4:
			++f4;
			break;
		case 5:
			++f5;
		case 6:
			++f6;
		case 7:
			++f7;
		case 8:
			++f8;
			break;
		case 9:
			++f9;
			break;
		case 10:
			++f10;
			break;
		case 11:
			++f11;
			break;
		case 12:
			++f12;
			break;
		}
	}
	
	printf("face	frequency\n");
	printf("face2	%d\n",f2);
	printf("face3	%d\n", f3);
	printf("face4	%d\n", f4);
	printf("face5	%d\n", f5);
	printf("face6	%d\n", f6);
	printf("face7	%d\n", f7);
	printf("face8	%d\n", f8);
	printf("face9	%d\n", f9);
	printf("face10	%d\n", f10);
	printf("face11	%d\n", f11);
	printf("face12	%d\n", f12);
}

int die(void)
{
	int die1;
	int die2;

	die1 = 1 + rand() % 6;
	die2 = 1 + rand() % 6;

	return die1 + die2;
}