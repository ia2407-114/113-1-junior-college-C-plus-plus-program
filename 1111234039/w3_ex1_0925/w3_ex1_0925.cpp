/* 從鍵盤輸入浮點數值 */
#include <stdio.h>
#define PI 3.1415
int main()
{
    double r = 0.0;  /* 宣告浮點變數price和指定初值0.0 */
    double h = 0.0;

    printf("請輸入半徑值==> \n");  /* 顯示提示字串 */
    printf("請輸入高值==> \n");
    scanf_s("%lf", & r);            /* 輸入浮點數值 */
    scanf_s("%lf", & h);
                         /* 輸出變數price的值 */
    printf("圓周長是: %f\n", (r * 2 * PI));   /*計算圓周長*/
    printf("圓面積是: %f\n", (r * r * PI));  /*計算圓面積*/
    printf("圓柱體體積是: %f\n", (r *r * h * PI));  /*計算圓柱體體積*/
    printf("圓錐體體積是: %f\n", ( r * r * h * PI)/3);  /*計算圓錐體體積*/
    return 0;
}