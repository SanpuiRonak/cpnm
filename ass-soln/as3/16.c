
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter the 100 integers : ");
    int p = 0;
    int zero = 0;
    int n = 0;
    for (int i = 1; i <= 100; i++) {
        int n;
        scanf("%d", &n);
        if (n > 0)
            p++;
        else if (n == 0)
            zero++;
        else
            n++;
        printf("\n");
    }
    printf(
        "The number of positives are %d\nZeroes are %d,\nand negatives are %d",
        p, zero, n);
}
