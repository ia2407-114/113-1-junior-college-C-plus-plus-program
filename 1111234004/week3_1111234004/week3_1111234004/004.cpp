/* �q��L��J�B�I��*/
#include <stdio.h>

int main()
{
	double price = 0.0; /*�ŧi�B�I�ܼƩM���w���0.0*/

	printf("�п�J�B�I�ƭ�==>\n"); /*��ܴ��ܦr��*/
	scanf_s("%lf", &price); /*��J�B�I�ƭ�*/
	/*��X�ܼ� price����*/

	printf("�ܼ�price������ȬO:%f\n", (price*price ));

	return 0;

}