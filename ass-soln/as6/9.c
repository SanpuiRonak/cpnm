#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Too few arguments!\n");
        return 0;
    }
    FILE *base = fopen(argv[1], "r");
    FILE *copy = fopen(argv[2], "w");

    if (base == NULL) {
        printf("Cannot find %s", argv[1]);
        return 0;
    } else if (copy == NULL) {
        printf("Cannot find %s", argv[2]);
        return 0;
    }

    char c = fgetc(base);
    while (c != EOF) {
        fputc(c, copy);
        c = fgetc(base);
    }
    fclose(base);
    fclose(copy);
    printf("copied successfully\n");
}