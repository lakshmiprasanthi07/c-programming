#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=85 && a<=100)
    {
        printf("Grade A");
    }
    else if(a>=70 && a<=84)
    {
        printf("Grade B");
    }
    else if(a>=45 && a<=69)
    {
        printf("Grade C");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}