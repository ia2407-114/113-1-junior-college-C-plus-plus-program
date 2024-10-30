#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    int die1 = rand() % 6 + 1; 
    int die2 = rand() % 6 + 1; 
    return die1 + die2; 
}

int main() {
    int ex; 
    int counts[13] = { 0 };

    
    srand(time(NULL));

    
    printf("叫块龟喷Ω计: ");
    scanf_s("%d", &ex);

    
    for (int i = 0; i < ex; i++) {
        int total = rollDice(); 
        counts[total]++; 
    }

    
    printf("翴计瞷Ω计参璸:\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d翴: %dΩ\n", i, counts[i]);
    }

    return 0;
}