#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int c, d;
    char string[] = "prashu";
    printf("================================\n");
    for (c = 0; c <= 11; c++) {
    d = c + 1;
    printf("|%-1.*s|\n", d, string);
    }
    printf("================================\n");
    for (c = 11; c >= 0; c--) {
    d = c + 1;
    printf("|%-1.*s|\n", d, string);
    }
    printf("================================\n");
    return 0;

}