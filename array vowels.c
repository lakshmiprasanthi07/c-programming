#include <stdio.h>
#include <string.h>

void main() {
    char str[30];
    int vow = 0, cons = 0, i = 0;
    printf("Enter the string: ");
    gets(str);
    strupr(str);
    printf("Uppercase String = %s\n", str);
    while(str[i] != '\0')
    {
    if(str[i] >= 'A' && str[i] <= 'Z')
    {
    if(str[i] == 'A' || str[i] == 'E' ||
    str[i] == 'I' || str[i] == 'O' ||
    str[i] == 'U')
    {
    vow++;
    }
    else
    {
    cons++;
    }
    }
    i++;
    }
    printf("Number of vowels = %d\n", vow);
    printf("Number of consonants = %d\n", cons);
}