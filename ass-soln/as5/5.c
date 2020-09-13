#include <stdio.h>

int main() {
    char c[1000];
    gets(c);
    int count = 0;
    char ch = c[count];
    while (ch != NULL) {
        count++;
        ch = c[count];
    }
    printf("The no of characters is %d", count);
}