/* �q��L��J��*/
#include<stdio.h>
#define PI 3.14

int main()
{
	double r,h = 0.0; /*�ŧi�ܼƩM���w���0.0*/

	printf("�п�J�b�|\n"); /*��ܴ��ܦr��*/
	scanf_s("%Lf", &r); /*��J�b�|*/
	printf("�п�J�ꪺ����\n"); /*��ܴ��ܦr��*/
	scanf_s("%Lf", &h); /*��J����*/


	printf("��P��= %f\n", ((2 *r)* PI));
	printf("�ꭱ�n= %f\n", (r * r * PI));
	printf("��W����n= %f\n", (r * r * PI) * h);
	printf("���@����n= %f\n",  (r * r * PI) *1/3* h);
}