#include <stdio.h>
#define For(i, n) fr(int i = 0; i < n; i++)

int main() {
    printf("Enter a no\n");
    int n;
    scanf("%d", &n);
    (n % 2 == 0) ? printf("Even") : printf("Odd");
}