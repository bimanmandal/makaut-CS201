#include <stdio.h>
int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("File could not be opened\n");
        return 1;
    }

    int ch;

    while ((ch = getc(fp)) != EOF) {
        printf("Character Read : ");
        putchar(ch);
        printf("\n");
    };

    fclose(fp);

    return 0;
}