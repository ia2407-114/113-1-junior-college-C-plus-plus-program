#include <stdio.h>
int main()
{
	double g, h,bmi = 0.0;
    printf("請輸入體重(kg)==>\n");
    scanf_s("%lf", &g);
    printf("請輸入身高(cm)==>\n");
    scanf_s("%lf", &h);

   bmi= g /( (h/100)*(h / 100));

   printf("BMI值:%f\n",bmi);
      
   if ((bmi < 18.5) && (bmi < 0))
   {
       printf("體重過輕", bmi);
   }
   
   else if ((bmi < 18.5) && (bmi <= 24))
   {
       printf("體重標準", bmi);
   }
   
   else if ((bmi >= 18.5) && (bmi <= 27))
   {
       printf("體重微胖", bmi);
   }
   
   else if (bmi > 27);
       {
       printf("體重過胖", bmi);
       }
       

    return 0;





}
