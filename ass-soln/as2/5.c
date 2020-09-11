#include <stdio.h>

int main() {
    printf("Enter two num\n");
    int n, m;
    scanf("%d %d", &n, &m);
    int deno, num;
    if (n < m) {
        num = m;
        deno = n;
    } else {
        num = n;
        deno = m;
    }
    printf("Decimal Format is %f\n", ((float)num / (float)deno));
    printf("Mixed Fraction Format is %d(%d/%d)", num / deno, num % deno, deno);
}