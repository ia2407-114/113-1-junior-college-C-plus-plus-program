#include <stdio.h>
int main()
{
	double g, h,bmi = 0.0;
    printf("�п�J�魫(kg)==>\n");
    scanf_s("%lf", &g);
    printf("�п�J����(cm)==>\n");
    scanf_s("%lf", &h);

   bmi= g /( (h/100)*(h / 100));

   printf("BMI��:%f\n",bmi);
      
   if ((bmi < 18.5) && (bmi < 0))
   {
       printf("�魫�L��", bmi);
   }
   
   else if ((bmi < 18.5) && (bmi <= 24))
   {
       printf("�魫�з�", bmi);
   }
   
   else if ((bmi >= 18.5) && (bmi <= 27))
   {
       printf("�魫�L�D", bmi);
   }
   
   else if (bmi > 27);
       {
       printf("�魫�L�D", bmi);
       }
       

    return 0;





}
