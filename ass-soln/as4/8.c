#include <stdio.h>

int main() {
    printf("Enter dimesions of matrix:\n");
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter the matrix");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The transpose of the matris is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}