#include <stdio.h>
int main() {
   int n,i;
   printf("ENTER THE ELEMENTS= ");
   int even=0,odd=0;
   scanf("%d",&n);
   int arr[50];
   for( i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }for(i=0;i<n;i++){
    if(arr[i]%2==0){
      even++;
    } else{
      odd++;
    }
     }
     printf("the number of count of even num is :%d\n",even);
          printf("the number of count of odd num is :%d",odd);

 return 0;
}