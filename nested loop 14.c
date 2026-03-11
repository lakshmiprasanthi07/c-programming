#include<stdio.h>
int main(){
    char i,j,n;
    scanf("%c",&n);
    for (i=n;i>='A';i--) {
        for (j='A';j<i+1;j++) {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}