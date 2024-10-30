#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIDES 6  
int rollTwoDice();


int rollTwoDice() {
    int die1 = rand() % SIDES + 1;  
    int die2 = rand() % SIDES + 1;  
    return die1 + die2;             
}

int main() {
    int ex;  
    int counts[13] = { 0 };  

    
    printf("�п�J���禸�ơG");
    scanf_s("%d", &ex);

   
    srand(time(NULL));

    
    for (int i = 0; i < ex; i++) {
        int result = rollTwoDice();  
        counts[result]++;            
    }

    
    printf("�U�I�ƥX�{�����Ƭ��G\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d�I�X�{�����ơG%d\n", i, counts[i]);
    }

    return 0;
}
