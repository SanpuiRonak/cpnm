#include <stdio.h>
#define For(i, n) fr(int i = 0; i < n; i++)

int main() {
    printf("Enter two Numbers\n");
    int a;
    int b;
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped Values are %d %d", a, b);
}