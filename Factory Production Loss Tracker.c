#include <stdio.h>

int main() {
    int n, loss, total = 0, highLossDays = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &loss);
        total += loss;
        if (loss > 100) 
        highLossDays++;
    }
    printf("Total Loss: %d\nHigh Loss Days: %d", total, highLossDays);
    return 0;
}
