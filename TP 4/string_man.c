#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 64

int main(int argc, char* argv[]) {
    char* p1 = (char*)malloc(MAX_SIZE * sizeof(char));
    char* p2 = p1;

    strcpy(p1, argv[1]);

    while (*p1 != '\0') {
        if (isupper(*p1)) {
            *p1 = tolower(*p1);
        }
        p1++;
    }

    printf("p1 holds:%s\n", p2);
}