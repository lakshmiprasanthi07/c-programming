#include <stdio.h>
 int main() {
    int n, sum = 0;
    if (scanf("%d", &n) != 1) 
    return 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}