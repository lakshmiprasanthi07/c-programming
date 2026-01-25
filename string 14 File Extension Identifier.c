#include <stdio.h>
#include <string.h>

int main()
{
    char filename[50];

    printf("Enter the file name: ");
    scanf("%s", filename);

    if (strcmp(filename + strlen(filename) - 4, ".txt") == 0)
        printf("It is a .txt file\n");
    else
        printf("It is NOT a .txt file\n");

    return 0;
}
