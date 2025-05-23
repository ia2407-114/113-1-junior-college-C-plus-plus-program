/* 從鍵盤輸入浮點數值 */
#include <stdio.h>

// 鍵盤輸入身高(公分)、體重(公斤)，計算印出出BMI值以及檢驗結果(過輕、標準、微胖、過胖)

int main(void)
{
    float h, w, bmi;
    printf("請輸入身高(公分)和體重(公斤)==>\n");
    scanf_s("%f %f", &h, &w);

    bmi = w / (h / 100) / (h / 100);

    if (bmi >= 35) {
        printf("BMI為%f\n", bmi);
        printf("重度肥胖\n");
    }
    else {
        if (bmi >= 30) {
            printf("BMI為%f\n", bmi);
            printf("中度肥胖\n");
        }
        else {
            if (bmi >= 27) {
                printf("BMI為%f\n", bmi);
                printf("輕度肥胖\n");
            }
            else {
                if (bmi >= 24) {
                    printf("BMI為%f\n", bmi);
                    printf("體重過重\n");
                }
                else {
                    if (bmi < 18.5) {
                        printf("BMI為%f\n", bmi);
                        printf("體重過輕\n");
                    }
                    else {
                        printf("BMI為%f\n", bmi);
                        printf("正常範圍\n");
                    }
                }
            }
        }
    }

    return 0;
}