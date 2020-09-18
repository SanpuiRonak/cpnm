#include <stdio.h>

int main() {
    int n;
    printf("Enter a no\n");
    scanf("%d", &n);
    int digits = 0;
    char num[100];
    for (int i = n; i > 0; i /= 10) {
        digits++;
    }
}