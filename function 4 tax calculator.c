#include <stdio.h>

float calculateIncome(float salary, float bonus)
{
    return salary + bonus;
}

int main()
{
    float salary, bonus, income;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter bonus: ");
    scanf("%f", &bonus);

    income = calculateIncome(salary, bonus);

    printf("Total Income = %.2f", income);

    return 0;
}
