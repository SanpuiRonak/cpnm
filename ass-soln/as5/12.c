#include <stdio.h>

int main() {
    char n[100];
    gets(n);
    int num = 0;
    int i = 0;
    while (n[i] != NULL) {
        num = 10 * num + (n[i] - '0');
        i++;
    }
    printf("number is %d", num);
}