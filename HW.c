#include <stdio.h>
int main() {
    int n;
printf("Enter the number:");
scanf("%d",&n);
int thousand=n/1000;
printf("The Thousand Digit :%d\n",thousand);
int third=n/100;
int hundred=third%10;
printf("The Third Digit :%d\n",hundred);
int tens=n/10;
int ten=tens%10;
printf("The Tenth Digit is :%d\n",ten);
int num=n%10;
int once=num%10;
printf("The once place is :%d",once);
    
    return 0;
}