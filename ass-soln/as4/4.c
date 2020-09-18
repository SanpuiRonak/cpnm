#include <stdio.h>

int main() {
    printf("Enter no of terms:\n");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers;\n");
    int min, max;
    scanf("%d", a);
    min = max = a[0];
    for (int i = 1; i < n; i++) {
        scanf("%d", a + i);
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("The range is %d", max - min);
}