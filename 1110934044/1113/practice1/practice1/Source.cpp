#include <stdio.h>

int main(void)
{
    int n[5], i;
    for (i = 0; i < 5; ++i) {
        printf("輸入第 %d 個整數: ", i + 1);
        scanf_s("%d", &n[i]);
    }
    printf("%7s%13s\n", "項數", "數字");
    for (i = 0; i < 5; ++i) {
        printf("%7d%13d\n", i, n[i]);
    }

    return 0;
}
