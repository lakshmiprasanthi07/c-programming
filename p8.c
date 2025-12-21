#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='0'||ch=='U')
    printf("vowel");
    else
    printf("consonant");
    return 0;
}