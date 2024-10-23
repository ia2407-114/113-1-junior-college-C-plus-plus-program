#include <stdio.h>
int main()
{
	double cm, kg, bmi = 0.0; /*宣告變數和指定初值0.0*/

	printf("請輸入身高\n"); /*顯示提示字串*/
	scanf_s("%Lf", &cm); /*輸入身高*/
	printf("請輸入體重\n"); /*顯示提示字串*/
	scanf_s("%Lf", &kg); /*輸入體重*/
   bmi=( kg / ((cm / 100) * (cm / 100)));
		 printf ("bmi==> %f\n", bmi);

	if (bmi >= 35)
	{
		puts("重度肥胖");
	} // end if
	else {
		if (bmi >= 30)
		{
			puts("中度肥胖");
		} // end if 
		else{
			if (bmi >= 27)
			{
				puts("輕度肥胖");
			} // end if 
			else{
				if (bmi >= 24)
				{
					puts("過重");
				} // end if
				else{
					if (bmi >=18.5)
					{
						puts("正常");
					} // end if
					else {
						puts("體重過輕");
					}// end else
				} // end else
			} // end else
		} // end else
	} // end else
}