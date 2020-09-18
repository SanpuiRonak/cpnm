#include <stdio.h>

int main() {
    int a[5][5];
    int sum[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter mark for subject %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
        }
        sum[i] = 0;
        for (int k = 0; k < 5; k++) {
            sum[i] += a[i][k];
        }
    }
    int max = sum[0];
    for (int i = 0; i < 5; i++) {
        printf("Total marks of student %d is %d\n", i + 1, sum[i]);
        if (sum[i] > max) max = sum[i];
    }
    printf("The highest total was %d.\n", max);
}