#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("3.c", "r");
    char data[50];
    if (file != NULL) {
        while (fgets(data, 50, file) != NULL) {
            puts(data);
        }
    }
}