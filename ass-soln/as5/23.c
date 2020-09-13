#include <stdio.h>

int main() {
    int n;
    printf("Enter no of element\n");
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
    for (int i = 0; i < n; i++) {
        sum += *(a + i);
    }
    printf("%d", sum);
}