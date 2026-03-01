#include <stdio.h>

int main() {
    int N, vibration;
    int unsafe_count = 0, consecutive_unsafe = 0;
    int breakdown_at = -1;
    int current = 1;

    scanf("%d", &N);
    while (current <= N) {
        scanf("%d", &vibration);
        if (vibration > 70) {
            unsafe_count++;
            consecutive_unsafe++;
            if (consecutive_unsafe == 3 && breakdown_at == -1) {
                breakdown_at = current;
            }
        } 
        else
         {
            consecutive_unsafe = 0;
        }
        current++;
    }

    if (breakdown_at != -1)
     printf("Breakdown At Reading: %d\n", breakdown_at);
    else 
    printf("Breakdown At Reading: Not Occurred\n");
    
    printf("Unsafe Readings: %d\n", unsafe_count);
    return 0;
}
