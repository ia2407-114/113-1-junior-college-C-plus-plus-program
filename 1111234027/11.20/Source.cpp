#include <stdio.h>

float avg_score(int array[5][4]);

int main() {
    int data[5][4];

   
    for (int i = 0; i < 5; i++) {
        printf("請輸入第 %d 位學生的資料:\n", i + 1);
        printf("學號: ");
        scanf_s("%d", &data[i][0]);  
        printf("計概成績: ");
        scanf_s("%d", &data[i][1]); 
        printf("數學成績: ");
        scanf_s("%d", &data[i][2]);
        data[i][3] = 0;  
    }

    
    float total_avg = avg_score(data);


    printf("\n學號\t計概\t數學\t平均\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t%d\t%d\t%.1f\n", data[i][0], data[i][1], data[i][2], (float)data[i][3]);
    }

   
    printf("全班總平均: %.2f\n", total_avg);

    return 0;
}

float avg_score(int array[5][4]) {
    float total_avg = 0.0;
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 1; j <= 2; j++) {
            sum += array[i][j];
        }
        float avg = (float)sum / 2; 
        array[i][3] = avg;         
        total_avg += avg;
    }
    return total_avg / 5; 
}