#include <stdio.h>

int main() {
    int fuel, N, burn;
    int emergency_stage = -1, fuel_wasted = 0;
    int current = 1;

    scanf("%d %d", &fuel, &N);
    while (current <= N) {
        scanf("%d", &burn);
        fuel -= burn;
        
        if (fuel < 0 && emergency_stage == -1) {
            emergency_stage = current;
            fuel_wasted = -fuel; 
        }
        current++;
    }

    if (emergency_stage != -1)
     {
        printf("Emergency Stage: %d\n", emergency_stage);
        printf("Fuel Wasted: %d\n", fuel_wasted);
    }
     else
      {
        printf("Emergency Stage: Not Occurred\nFuel Wasted: 0\n");
    }
    return 0;
}
