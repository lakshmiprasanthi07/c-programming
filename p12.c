#include <stdio.h>
int main() {
int s;
scanf("%d",&s);
if(s>=20000)
s+=20000;
else s+=10000;
 printf("%d",s); 
    return 0;
}