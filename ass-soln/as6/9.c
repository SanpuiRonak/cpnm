#include <stdio.h>

int main() {
    printf("Enter File to open\n");
    char fileName1[100];
    gets(fileName1);

    printf("Enter File to copy to\n");
    char fileName2[100];
    gets(fileName2);

    FILE *base = fopen(fileName1, "r");
    FILE *copy = fopen(fileName2, "w");

    if (base == NULL) {
        printf("Cannot find %s", fileName1);
        return 0;
    } else if (copy == NULL) {
        printf("Cannot find %s", fileName2);
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