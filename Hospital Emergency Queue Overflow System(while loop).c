#include <stdio.h>

int main() {
    int maxCap, n, patients, i = 0, treated = 0, rejected = 0;
    scanf("%d %d", &maxCap, &n);
    while (i < n) {
        scanf("%d", &patients);
        if (treated < maxCap) {
            if (treated + patients <= maxCap) {
                treated += patients;
            } else {
                rejected += (treated + patients - maxCap);
                treated = maxCap;
            }
        } else {
            rejected += patients;
        }
        i++;
    }
    printf("Treated Patients: %d\nRejected Patients: %d\n", treated, rejected);
    return 0;
}
