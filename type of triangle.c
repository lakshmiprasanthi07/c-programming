#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x=y=z)
    {
        printf("equilateral triangle");
    }
    else
    {
        printf("not equilateral triangle");
    }
    return 0;
}