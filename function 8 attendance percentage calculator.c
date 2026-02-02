#include <stdio.h>

float calculateAttendance(int attended, int total)
{
    if (total == 0)
        return 0.0;  

    return ((float)attended / total) * 100;
}

int main()
{
    int attended, total;
    float percentage;

    printf("Enter total number of classes: ");
    scanf("%d", &total);

    printf("Enter number of classes attended: ");
    scanf("%d", &attended);

    percentage = calculateAttendance(attended, total);

    printf("Attendance Percentage = %.2f%%\n", percentage);

    return 0;
}
