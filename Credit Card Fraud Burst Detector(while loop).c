#include <stdio.h>

int main() {
    int N;
    long amount;
    int high_value_count = 0, consecutive_high = 0;
    int trigger_at = -1;
    int current = 1;

    scanf("%d", &N);
    while (current <= N) {
        scanf("%ld", &amount);
        if (amount >= 50000) {
            high_value_count++;
            consecutive_high++;
            if (consecutive_high == 3 && trigger_at == -1) {
                trigger_at = current;
            }
        } else {
            consecutive_high = 0;
        }
        current++;
    }

    if (trigger_at != -1) 
    printf("Fraud Triggered At Attempt: %d\n", trigger_at);
    else
     printf("Fraud Triggered At Attempt: Not Triggered\n");
    
    printf("High-Value Transactions: %d\n", high_value_count);
    return 0;
}
