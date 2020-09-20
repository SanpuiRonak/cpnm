#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of terms in the series : ");
    scanf("%d", &n);

    int t1 = 0;
    int t2 = 1;
    int nt;
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }
    return 0;
}