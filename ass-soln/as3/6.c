#include <stdio.h>

int main() {
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int i = n;
    int fact = 1;
    while (i > 1) {
        fact *= i;
        i--;
    }
    printf("%d", fact);
}