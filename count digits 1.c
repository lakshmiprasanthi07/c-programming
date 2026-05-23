#include <stdio.h>
int countDigits(int num) {
    int count = 0;
    if (num == 0) {
    return 1;
    }
    while (num != 0) {
    num = num / 10;
    count++;
    }
    return count;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits = %d", countDigits(num));
    return 0;
}
