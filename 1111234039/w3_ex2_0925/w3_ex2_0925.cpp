/* 從鍵盤輸入浮點數值 */
#include <stdio.h>

int main()
{
    double cm = 0.0;  /* 宣告浮點變數price和指定初值0.0 */
    double kg = 0.0;
    double bmi = 0.0;
    printf("請輸入身高(公分)==> \n");  /* 顯示提示字串 */
    printf("請輸入體重(公斤)==> \n");
    scanf_s("%lf", &cm);            /* 輸入浮點數值 */
    scanf_s("%lf", &kg);
    /* 輸出變數price的值 */
    bmi = kg / ((cm / 100) * (cm / 100));
    printf("BMI是: %f\n", bmi);   /*計算BMI*/

    if ((bmi < 18.5) && (bmi > 0))
    {
        printf("體重過輕");
    }
    else if ((bmi >= 18.5) && (bmi <= 24))
    {
        printf("體重標準");
    }
    else if ((bmi >= 24) && (bmi <= 27))
    {
        printf("體重微胖");
    }
    else if (bmi > 27)
    {
        printf("體重過胖");
    }
    
    return 0;
}