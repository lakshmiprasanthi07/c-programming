#include <stdio.h>
int main() {
int a,b;
int *p1,*p2;
char c,d;
char *p3,*p4;
float e,f;
char *p5,*p6;
printf("The address of a%v and b%v\n",&a,&b);
p1++;
p2++;
printf("The address of c%v and d%v\n",&c,&d);
p3++;
p4++;
printf("The address of e%v and f%v\n",&e,&f);
p5++;
p6++;
    return 0;
}