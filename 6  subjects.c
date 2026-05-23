#include <stdio.h>
int main() {
    int T,H,E,M,S,P;
    int total;
    float average;
    printf("Enter marks for 6 subjects:\n");
    scanf("%d %d %d %d %d %d", &T, &H, &E, &M, &S, &P);
    total = T+H+E+M+S+P;
    average = total / 6.0;
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);
    return 0;
}