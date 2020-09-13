#include <stdio.h>

int main() {
    char c[1000];
    gets(c);
    int count = 0;
    char ch = c[0];
    while (ch != NULL) {
        count++;
        ch = c[count];
    }
    for (int i = count; i >= 0; i--) {
        printf("%c", c[i]);
    }
}