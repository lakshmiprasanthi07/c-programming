#include <stdio.h>
int add(int a,int b,int c,int d)
{
    int s=a+b+c+d;
    return s;
}
int main() {
    int a,b,c,d,s;
    printf("Enter the number %5d",add(1,2,3,4));
    
    return 0;
}