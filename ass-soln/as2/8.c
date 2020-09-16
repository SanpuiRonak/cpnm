#include <stdio.h>

int main(void) {
    double f, c;
    printf("Enter tempurature:\n");
    scanf("%lf", &f);
    c = (5.0 * (f - 32.0)) / 9.0;
    printf("It is equivalent to %0.2lf°C\n", c);
}