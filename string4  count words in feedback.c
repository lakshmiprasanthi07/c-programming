#include<stdio.h>
#include<string.h>
int main()
{
    char space[50];
    int i,count=0;
    fgets(space,50,stdin);
    if(space[0]=='\0')
    {
    printf("\0");
    return 0;
    }
    count=1;
    for(i=0;i<space[i]!='\0';i++){
        if(space[i]==' ')
        count++;
    }
    printf("%d",count);
    return 0;
}