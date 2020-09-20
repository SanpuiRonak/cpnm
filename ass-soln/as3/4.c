#include <stdio.h>

int main() {
    printf("Enter n:\n");
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum is %d", sum);
}