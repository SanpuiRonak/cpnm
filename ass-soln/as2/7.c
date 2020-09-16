#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three no: ");
    scanf("%d %d %d", &a, &b, &c);
    double avg = (double)(a + b + c) / 3.0;
    printf("Their average is : %lf\n", avg);
    if (a == b && b == c) {
        printf("All numbers are equal to Avg.\n");
        return 0;
    }
    printf("Below average numbers are:\n");
    if (a < avg) printf("%d\n", a);
    if (b < avg) printf("%d\n", b);
    if (c < avg) printf("%d\n", c);
    printf("Above average number are:\n");
    if (a > avg) printf("%d\n", a);
    if (b > avg) printf("%d\n", b);
    if (c > avg) printf("%d\n", c);

    return 0;
}