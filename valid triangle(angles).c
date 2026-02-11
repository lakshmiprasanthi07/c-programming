#include <stdio.h>
int main() {
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x+y+z==180){
    printf("valid triangle");
}  
else
{
    printf("invalid triangle");
    
}
    return 0;
}