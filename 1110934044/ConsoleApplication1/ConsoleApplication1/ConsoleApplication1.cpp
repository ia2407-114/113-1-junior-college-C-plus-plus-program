#include <stdio.h>

int main() {
    double h = 0.0; 
    double w = 0.0; 


    printf("請輸入身高 ==> \n");
    scanf_s("%lf", &h);
    h /= 100; 
    printf("請輸入體重 ==> \n");
    scanf_s("%lf", &w);
    double bmi = w / (h* h);
    if (bmi >= 35) {
        puts("重度肥胖");
    } 
    else {
        if (bmi >= 30) {
            puts("中度肥胖");
        } 
        else {
            if (bmi >= 27) {
                puts("輕度肥胖");
            } 
            else {
                if (bmi >= 24) {
                    puts("過重");
                } 
                else {
                    if (bmi >= 18.5) {
                        puts("正常");
                    }
                    else {
                        puts("過輕");
                    }
                } 
            } 
        } 
    } 
 
    return 0;
}