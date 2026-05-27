#include <stdio.h>
int main() {
   char a;
   int b;
   float c, d;

   a = 'A';
   b = 125;
   c = 10.25;
   d = 18.76;

   printf("%c is stored at addr %u.\n", a, &a);
   printf("%d is stored at addr %u.\n", b, &b);
   printf("%f is stored at addr %u.\n", c, &c);
   printf("%f is stored at addr %u.\n", d, &d);
   
    return 0;
}