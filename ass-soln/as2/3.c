#include <stdio.h>
#define For(i, n) fr(int i = 0; i < n; i++)

int main() {
    printf("Enter a no:\n");
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = n; i > 0; i /= 10) {
        sum += i % 10;
    }
    printf("Sum is %d", sum);
}