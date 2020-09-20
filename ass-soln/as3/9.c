#include <stdio.h>

int main() {
    int flag;
    printf("The prime numbers between 1 and 100 are: \n");
    for (int n = 2; n <= 100; n++) {
        flag = 0;
        for (int j = 2; j <= n / 2; j++) {
            if (n % j == 0) {
                flag++;
                break;
            }
        }
        if (flag == 0) {
            printf("%d\n", n);
        }
    }
    return 0;
}