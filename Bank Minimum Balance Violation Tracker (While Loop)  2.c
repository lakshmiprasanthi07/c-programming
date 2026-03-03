#include <stdio.h>
int main() {
    int n;
    int initial_balance;
    scanf("%d",&n);
    scanf("%d",&initial_balance);
    int i=0;
    int count=0;
    int final_amount=initial_balance;
    while(i<n){
        int amount;
        scanf("%d",&amount);
        if(amount<2000){
            count++;
        }
        final_amount=final_amount-amount;
        i++;
    }
    printf("%d \n",count);
    printf("%d",final_amount); 
    return 0;
}