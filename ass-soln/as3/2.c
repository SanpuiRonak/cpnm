#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = n; i > 0; i /= 10) {
        sum += i % 10;
    }
    printf("Sum of digits %d", sum);
}