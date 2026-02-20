#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int  total,ticket;
    

    for (int i=0;i<n;i++){

        scanf("%d",&ticket);
        total=total +ticket;
        
    }
    printf("%d",total);
    return 0;
}