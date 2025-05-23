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

    
    printf("請輸入實驗次數：");
    scanf_s("%d", &ex);

   
    srand(time(NULL));

    
    for (int i = 0; i < ex; i++) {
        int result = rollTwoDice();  
        counts[result]++;            
    }

    
    printf("各點數出現的次數為：\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d點出現的次數：%d\n", i, counts[i]);
    }

    return 0;
}
