#include <stdio.h>

int main() {
    int n, score, total = 0, failed = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        total += score;
        if (score < 40)
         failed++;
    }
    printf("Average Score: %d\nFailed Subjects: %d", total / n, failed);
    return 0;
}
