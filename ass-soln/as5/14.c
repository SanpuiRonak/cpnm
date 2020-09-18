#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string\n");
    gets(s);
    int count = 0;
    int index = 0;
    while (s[index] != 0) {
        if (s[index] == ' ') {
            count++;
        }
        index++;
    }
    printf("number of word is %d", ++count);
}