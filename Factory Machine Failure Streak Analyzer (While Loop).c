#include <stdio.h>

int main() {
    int n, i = 0, current_streak = 0, max_streak = 0;
    
    if (scanf("%d", &n) != 1) return 0;
    int status[n];

    while (i < n) {
        scanf("%d", &status[i]);
        if (status[i] == 0) {
            current_streak++;
            if (current_streak > max_streak) {
                max_streak = current_streak;
            }
        } else {
            current_streak = 0;
        }
        i++;
    }

    printf("Longest Failure Streak: %d\n", max_streak);
    return 0;
}
