/*題目1. 建立一個4X5的二維陣列score以及字元二維陣列names[5][10]，分別存放學號ID、與對應的計概成績、數學成績,以及存放學生姓名。 
請建立一個副程式avg_score()，將score陣列names陣列以及陣列長度傳給avg_score()，由它計算每個同學的平均成績後，將結果放入二維陣列中，
由avg_score()印出學生姓名、學號、數學、計概與平均成績。最後再傳回總平均(浮點數)，由主程式印出。*/
#include <stdio.h>

float avg_score(int arr[4][5], char names[4][10], int len);

int main(void) {
    int n[4][5] = { 0 };      
    char names[4][10];         
    float avg = 0;

    for (size_t i = 0; i < 4; ++i) { 
        printf("\n請輸入學生%d的學號: ", i + 1);
        scanf_s("%d", &n[i][0]);  
        printf("\n請輸入學生%d的計概成績: ", i + 1);
        scanf_s("%d", &n[i][1]);  
        printf("\n請輸入學生%d的數學成績: ", i + 1);
        scanf_s("%d", &n[i][2]); 
        printf("\n請輸入學生%d的姓名: ", i + 1);
        scanf_s("%s", names[i], sizeof(names[i])); 
    }

    avg = avg_score(n, names, 4);
    printf("\n全班總平均: %.2f\n", avg);

    printf("%-10s%-10s%-10s%-10s%-10s\n", "學號", "姓名", "計概", "數學", "平均");

    for (size_t i = 0; i < 4; ++i) {
        printf("%-10d%-10s%-10d%-10d%-10.2f\n", n[i][0], names[i], n[i][1], n[i][2], (float)n[i][3]);
    }

    return 0;
}

// 計算學生的平均分數並回傳
float avg_score(int arr[4][5], char names[4][10], int len) {
    float average = 0;
    for (int i = 0; i < len; i++) {
        // 計算每個學生的平均成績
        arr[i][3] = (arr[i][1] + arr[i][2]) / 2.0;  // 平均分數放在 arr[i][3]
        average += arr[i][3];  // 累加總平均
    }
    return average / len;  // 計算總平均
}
