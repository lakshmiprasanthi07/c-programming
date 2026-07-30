#include <stdio.h>
#include <string.h>
int main(){
    char str[30];
    int vow=0,cons=0,i=0;
    printf("Enter the string = ");
    gets(str);
    while(str[i]!='\0')
    {
     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||
    str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
    vow++;   
    else
    cons++;
    i++;
    }
    printf("Number of vowels = %d\n", vow);
    printf("Number of consonants = %d\n", cons);
    return 0;
}