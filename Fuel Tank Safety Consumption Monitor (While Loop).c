#include <stdio.h>

int main() {
    int fuel, n, consumption;
    int trips = 0, i = 0;

    scanf("%d %d", &fuel, &n);

    while (i < n) {
        scanf("%d", &consumption);
        if (fuel >= consumption) {
            fuel -= consumption;
            trips++;
        } else {
          
            fuel = fuel; 
        }
        i++;
    }

    printf("Completed Trips: %d\n", trips);
    printf("Remaining Fuel: %d\n", fuel);

    return 0;
}
