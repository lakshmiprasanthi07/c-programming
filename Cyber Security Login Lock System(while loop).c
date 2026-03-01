#include <stdio.h>

int main() {
    int N, attempt, status;
    int total_failed = 0, consecutive_failed = 0;
    int lock_attempt = -1;
    int current = 1;

    scanf("%d", &N);
    while (current <= N) {
        scanf("%d", &status);
        if (status == 0) {
            total_failed++;
            consecutive_failed++;
            if (consecutive_failed == 3 && lock_attempt == -1) {
                lock_attempt = current;
            }
        }
         else
         {
            consecutive_failed = 0;
        }
        current++;
    }

    if (lock_attempt != -1)
     printf("Lock Triggered At Attempt: %d\n", lock_attempt);
    else
     printf("Lock Triggered At Attempt: Not Locked\n");
    
    printf("Total Failed Attempts: %d\n", total_failed);
    return 0;
}

