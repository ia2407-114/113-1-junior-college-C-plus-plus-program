#include <stdio.h>

float avg_score(int array[5][4]);

int main() {
    int data[5][4];

   
    for (int i = 0; i < 5; i++) {
        printf("�п�J�� %d ��ǥͪ����:\n", i + 1);
        printf("�Ǹ�: ");
        scanf_s("%d", &data[i][0]);  
        printf("�p�����Z: ");
        scanf_s("%d", &data[i][1]); 
        printf("�ƾǦ��Z: ");
        scanf_s("%d", &data[i][2]);
        data[i][3] = 0;  
    }

    
    float total_avg = avg_score(data);


    printf("\n�Ǹ�\t�p��\t�ƾ�\t����\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t%d\t%d\t%.1f\n", data[i][0], data[i][1], data[i][2], (float)data[i][3]);
    }

   
    printf("���Z�`����: %.2f\n", total_avg);

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