#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *buffer;
    buffer = (char *)malloc(10 * sizeof(char));
    if (buffer == NULL) {
        printf("malloc failed.\n");
        exit(1);
    }
    printf("Buffer of size 10 created\n");
    strcpy(buffer, "BITRAGUNTA");
    printf("\nBuffer contains: %s\n", buffer);
    buffer = (char *)realloc(buffer, 15 * sizeof(char));
    if (buffer == NULL) {
        printf("Reallocation failed.\n");
        exit(1);
    }
    printf("\nBuffer size modified.\n");
    printf("\nBuffer still contains: %s\n", buffer);
    strcpy(buffer, "NELLORE");
    printf("\nBuffer now contains: %s\n", buffer);

    free(buffer);

    return 0;
}