#include <stdio.h>

int main() {
    printf("Enter a charactrer:\n");
    int c;
    c = getchar();
    if (c >= '0' && c <= '9') {
        printf("It is a digit\n");
    } else if (c >= 'A' && c <= 'Z') {
        printf("It is a capital letter\n");
    } else if (c >= 'a' && c <= 'z') {
        printf("it is a small case letter\n");
    } else {
        printf("it is a special symbol\n");
    }
}