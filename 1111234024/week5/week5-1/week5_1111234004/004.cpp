#include <stdio.h>
int main()
{
	double cm, kg, bmi = 0.0; /*�ŧi�ܼƩM���w���0.0*/

	printf("�п�J����\n"); /*��ܴ��ܦr��*/
	scanf_s("%Lf", &cm); /*��J����*/
	printf("�п�J�魫\n"); /*��ܴ��ܦr��*/
	scanf_s("%Lf", &kg); /*��J�魫*/
   bmi=( kg / ((cm / 100) * (cm / 100)));
		 printf ("bmi==> %f\n", bmi);

	if (bmi >= 35)
	{
		puts("���תέD");
	} // end if
	else {
		if (bmi >= 30)
		{
			puts("���תέD");
		} // end if 
		else{
			if (bmi >= 27)
			{
				puts("���תέD");
			} // end if 
			else{
				if (bmi >= 24)
				{
					puts("�L��");
				} // end if
				else{
					if (bmi >=18.5)
					{
						puts("���`");
					} // end if
					else {
						puts("�魫�L��");
					}// end else
				} // end else
			} // end else
		} // end else
	} // end else
}