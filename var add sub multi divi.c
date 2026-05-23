#include <stdio.h>
float add(float a, float b, float c, float d) {
    return(a + b + c + d);
}
float sub(float a, float b, float c, float d) {
    return(a - b - c - d);
}
float multi(float a, float b, float c, float d) {
    return(a * b * c * d);
}

float divi(float a, float b, float c, float d) {
    return(a / b / c / d);
}

int main() {
    float a,b,c,d;

    printf("Enter 4 float numbers: ");
    scanf("%f %f %f %f",&a,&b,&c,&d);

    printf("Addition = %.2f\n", add(a,b,c,d));
    printf("Subtraction = %.2f\n", sub(a,b,c,d));
    printf("Multiplication = %.2f\n", multi(a,b,c,d));
    printf("Division = %.2f\n", divi(a,b,c,d));

    return 0;
}