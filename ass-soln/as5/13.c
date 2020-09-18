#include <stdio.h>

int main() {
    char s[100];
    printf("Enter a string\n");
    scanf("%s", s);
    int isPalen = 1;
    int length = 0;
    while (s[length] != 0) {
        length++;
    }

    for (int i = 0; i <= length / 2; i++) {
        if (s[i] == s[length - i - 1]) {
            continue;
        } else {
            isPalen = 0;
            break;
        }
    }
    if (isPalen == 0) {
        printf("%s is not palendrome", s);
    } else {
        printf("%s is palendrome", s);
    }
}
