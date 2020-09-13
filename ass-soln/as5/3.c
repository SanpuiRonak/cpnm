#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", sum(num));
}

int sum(int n) {
    if (n <= 0) return 0;
    return n % 10 + sum(n / 10);
}