
#include <stdio.h>

int main(void) {
    int a[3];
    printf("Enter three no's: ");
    scanf("%d %d %d", a, a + 1, a + 2);
    int max = a[0], min = a[0];
    for (int i = 1; i < 3; i++) {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }

    printf("The max is %d and,\nThe min is %d\n", max, min);

    return 0;
}