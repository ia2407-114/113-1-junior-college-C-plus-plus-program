#include  <stdio.h>
#define PI 3.14
int main()
{
	double h,r =0.0;
    printf("�п�J�b�|==>\n " );
	scanf_s("%lf", & r);
	printf("�п�J����==>\n ");
	scanf_s("%lf", & h);

	printf("�ꪺ�P���O:%f\n",((2*r)*PI));
	printf("�ꪺ���n�O:%f\n",(r*r*PI));
	printf("��W����n�O:%f\n", (r*r*PI)*h);
	printf("���@����n�O:%f\n", (r*r*PI)*1/3*h);
}