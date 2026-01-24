#include <stdio.h>
#include <string.h>

int main() {
    char url[200];

    printf("Enter a URL: ");
    scanf("%s", url);

    if (strncmp(url, "http://", 7) == 0 || strncmp(url, "https://", 8) == 0) {
        printf("Valid URL: Correct protocol used.\n");
    } else {
        printf("Invalid URL: Incorrect or missing protocol.\n");
    }

    return 0;
}
