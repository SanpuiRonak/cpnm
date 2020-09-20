#include <stdio.h>

int main() {
    printf("Enter n;\n");
    int n;
    scanf("%d", &n);
    int facti = 1;
    long sum = 0;
    for (int i = 1; i <= n; i++) {
        facti *= i;
        sum += facti;
        }
    printf("Sum is %d", sum);
}