// Fig. 6.3: fig06_03.c
// 手動輸入陣列元素並輸出
#include <stdio.h>

int main() {
    int n[5]; 

    printf("請輸入5個數：\n");
   
    for (size_t i = 0; i < 5; ++i) {
        printf("請輸入第 %lu 個數的值: ", i);
        scanf_s("%d", &n[i]); 
    }

    printf("第\n個數 \t值\n");

  
    for (size_t i = 0; i < 5; ++i) {
        printf("%lu\t\t%d\n", i, n[i]);
    }

    return 0;
}
