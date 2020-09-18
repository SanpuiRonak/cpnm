#include <stdio.h>

int main() {
    int n;
    printf("Enter array size\n");
    scanf("%d", &n);
    int ar[n];
    printf("Enter its elements\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ar + i);
    }
    for (int j = 0; j < n / 2; j++) {
        int temp = ar[j];
        ar[j] = ar[n - j - 1];
        ar[n - j - 1] = temp;
    }
    printf("Reversed elements are\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ar + i));
    }
}