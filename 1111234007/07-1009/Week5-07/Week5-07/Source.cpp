#include <stdio.h>
int main()
{
     double cm,kg,bmi = 0.0; 
  printf("�п�J����(����)==> \n");
 scanf_s("%lf", &cm); /* ��J�B�I�ƭ� */
  printf("�п�J�魫(����)==> \n");
  scanf_s("%lf", &kg); /* ��X�ܼ�price���� */ 
  bmi = kg / ((cm / 100) * (cm / 100));
	 printf("bmi==> %f\n", bmi); /*�p��BMI*/


  if (bmi >= 35) 
   {
	puts("���תέD");
   } // end if 
  else {
	  if (bmi >= 30)
	  {
		  puts("���תέD");
	  } // end if 
	  else {
		  if (bmi >= 27)
		  {
			  puts("���תέD");
		  }  // end if 
		  else {
			  if (bmi >= 24)
			  {
				  puts("�L��");
			  }  // end if 
			  else {
				  if (bmi >= 18.5)
				  {
					  puts("���`");
				  }
				  else {
					  puts("�L��");
				  }
			  }
		  }
	  }
    }
 }
              