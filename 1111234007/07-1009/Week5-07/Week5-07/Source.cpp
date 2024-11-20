#include <stdio.h>
int main()
{
     double cm,kg,bmi = 0.0; 
  printf("請輸入身高(公分)==> \n");
 scanf_s("%lf", &cm); /* 輸入浮點數值 */
  printf("請輸入體重(公斤)==> \n");
  scanf_s("%lf", &kg); /* 輸出變數price的值 */ 
  bmi = kg / ((cm / 100) * (cm / 100));
	 printf("bmi==> %f\n", bmi); /*計算BMI*/


  if (bmi >= 35) 
   {
	puts("重度肥胖");
   } // end if 
  else {
	  if (bmi >= 30)
	  {
		  puts("中度肥胖");
	  } // end if 
	  else {
		  if (bmi >= 27)
		  {
			  puts("輕度肥胖");
		  }  // end if 
		  else {
			  if (bmi >= 24)
			  {
				  puts("過重");
			  }  // end if 
			  else {
				  if (bmi >= 18.5)
				  {
					  puts("正常");
				  }
				  else {
					  puts("過輕");
				  }
			  }
		  }
	  }
    }
 }
              