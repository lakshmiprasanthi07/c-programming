#include<stdio.h>
int main(){
  int n,count=0;
  printf("enter the elements= ");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }int tar;
  printf("enter the target element= ");
  scanf("%d",&tar);
  for(int i=0;i<n;i++){
    if(a[i]==tar){
count++;
    }
    }printf("the value of the count of %d\n",count);
  return 0;
}
