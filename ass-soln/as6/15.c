#include <stdio.h>

int main() {
    FILE* input = fopen("input.txt", "r");
    FILE* output = fopen("output.txt", "w");
    if (input == NULL) {
        printf("Coudn't find input.txt");
        return 0;
    }
    char c = fgetc(input);
    int n[1000];
    int numbuf = 0;
    int sign = 1;
    int index = 0;

    while (c != EOF) {
        if (c == '-') {
            sign = -1;
        }
        if (c == ' ') {
            n[index] = sign * numbuf;
            index++;
            sign = 1;
            numbuf = 0;
        } else {
            numbuf = numbuf * 10 + (c);
        }
        c = fgetc(input);
    }
    n[index] = numbuf;

    for (int i = 0; i <= index; i++) {
        for (int j = 0; j <= index - 1 - i; j++) {
            if (n[j] > n[j + 1]) {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i <= index; i++) {
        fputs(n + i, output);
        fputc(' ', output);
    }
}