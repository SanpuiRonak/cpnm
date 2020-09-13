#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", tobin(n));
}

int tobin(int n) {
    if (n == 1 || n == 0) return n;
    return tobin(n / 2) * 10 + (n % 2);
}