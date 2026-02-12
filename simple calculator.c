#include <stdio.h>
#include <conio.h>
void main() {
    int a,b,n;
    
    
    printf("\n press 1 for addition");
    printf("\n press 2 for subtraction");
    printf("\n press 3 for multipication");
    printf("\n press 4 for division\n");

    scanf("%d",& n);
    printf("enter the values\n");
    scanf("%d %d",&a,&b);
    switch (n){
    case   1:
        printf(" %d + %d = %d ",a,b,a+b );
        break;

    case   2 :
        printf("%d - %d=%d ",a,b,a-b );
        break;

    case  3:
        printf( "%d*%d=%d ",a,b,a*b );
        break;

    case  4:
        printf("%d/%d=%d ",a,b,a/b  );
        break;
    default:
    printf("\n Enter correct value  ");
    break;
    }
 
    getch();
}