#include <stdio.h>
int countDigits(int num) {
int count = 0;
    if (num < 0) {
    num = -num;
    }
    do {
    num = num / 10;
    count++;
    } while (num != 0);
    return count;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = countDigits(num);

    printf("Number of digits = %d\n", result);

    return 0;
}

