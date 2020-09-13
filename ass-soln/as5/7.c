#include <stdio.h>

int main() {
    char name[100];
    gets(name);
    putchar(name[0]);
    int index = 1;
    char c = name[index];
    while (c != NULL) {
        if (c == ' ') {
            if (name[++index] != NULL) {
                putchar(name[index]);
            }
            c = name[index];
        } else {
            index++;
            c = name[index];
        }
    }
}