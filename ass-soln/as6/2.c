#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter data\n");
    char data[1000];
    gets(data);
    FILE *file;
    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Failed to write to file\n");
        return 0;
    } else {
        printf("Wrinting data...\n");
        if (strlen(data) > 0) {
            fputs(data, file);
        }
        fclose(file);
        printf("Data written succesfully\n");
    }
}