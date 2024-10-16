#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int i = 1, n = 0, m;

    printf("請輸入要顯示的數量 n: ");
    scanf_s("%d", &n);  // 输入 n

    // 确保 n 是正整数
    if (n < 1) {
        printf("請輸入一個大於 0 的整數。\n");
        return 1;
    }

    // 使用 while 循环显示结果
    while (i <= n)
    {
        m = i * i;   
        printf("%d\t%d\n", i, m);  
        i++;  
    }

    return 0;
}
