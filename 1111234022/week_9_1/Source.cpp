#include<stdio.h>
#include<stdlib.h>
#include<ctime>

int play();

int main()
{
	
	int  f2=0, f3=0, f4=0, f5=0, f6=0, f7=0, f8=0, f9=0, f10=0, f11=0, f12=0;
	int times;
	//srand(time(0));
	printf("請輸入要執行幾次\n");
	scanf_s("%d", &times);

	for (int i = 1; i<= times; i++)
		
	{
		switch (play())
		{
		case 2 :
			f2 += 1;
			break;
		case 3 :
			f3 += 1;
			break;
		case 4:
			f4 += 1;
			break;
		case 5:
			f5 += 1;
			break;
		case 6:
			f6 += 1;
			break;
		case 7:
			f7 += 1;
			break;
		case 8:
			f8 += 1;
			break;
		case 9:
			f9 += 1;
			break;
		case 10:
			f10 += 1;
			break;
		case 11:
			f11 += 1;
			break;
		case 12:
			f12 += 1;
			break;
		default:
			break;
		}



	}
	printf("第2面出現%d次\n", f2);
	printf("第3面出現%d次\n", f3);
	printf("第4面出現%d次\n", f4);
	printf("第5面出現%d次\n", f5);
	printf("第6面出現%d次\n", f6);
	printf("第7面出現%d次\n", f7);
	printf("第8面出現%d次\n", f8);
	printf("第9面出現%d次\n", f9);
	printf("第10面出現%d次\n", f10);
	printf("第11面出現%d次\n", f11);
	printf("第12面出現%d次\n", f12);
	



}
int play()
{	
	return 2 + rand() % 11;
}