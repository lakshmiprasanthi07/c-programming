#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int noise,count=0;
    while(n!=0){
        scanf("%d",&noise);
    if(noise>70){
        count++;
        }
        n--;
    }printf(" \ncount the violation sterrk in the given values is %d",count);
    
    
    return 0;
}