#include <stdio.h>
void bSort(int ar[], int n);

int main() {
    int n;
    printf("Enter no of terms\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the terms:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
    bSort(a, n);
    printf("In ascending order the numbers are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
}

void bSort(int ar[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            if (ar[i] > ar[j]) {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
}