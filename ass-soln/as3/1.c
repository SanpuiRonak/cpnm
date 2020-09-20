#include <stdio.h>

int main() {
    printf("Enter Number\n");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 100; i++) {
        if (i % n == 0) {
            printf("%d\n", i);
        }
    }
}