#include <stdio.h>

int main() {
    int capacity, n, change;
    int currentOccupancy = 0, criticalHours = 0, i = 0;

    scanf("%d %d", &capacity, &n);
    float threshold = 0.9 * capacity;

    while (i < n) {
        scanf("%d", &change);
        currentOccupancy += change;
        if (currentOccupancy > threshold) {
            criticalHours++;
        }
        i++;
    }

    printf("Final Occupied Beds: %d\n", currentOccupancy);
    printf("Critical Hours: %d\n", criticalHours);

    return 0;
}
